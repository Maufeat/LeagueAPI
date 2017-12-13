#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RiotMessagingServiceTokenType.hpp>
#include <lol/def/RiotMessagingServiceState.hpp>
namespace lol {
  struct RiotMessagingServiceSession { 
    RiotMessagingServiceState state;
    std::string token;
    RiotMessagingServiceTokenType tokenType; 
  };
  void to_json(json& j, const RiotMessagingServiceSession& v) {
  j["state"] = v.state; 
  j["token"] = v.token; 
  j["tokenType"] = v.tokenType; 
  }
  void from_json(const json& j, RiotMessagingServiceSession& v) {
  v.state = j.at("state").get<RiotMessagingServiceState>(); 
  v.token = j.at("token").get<std::string>(); 
  v.tokenType = j.at("tokenType").get<RiotMessagingServiceTokenType>(); 
  }
}
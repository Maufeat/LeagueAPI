#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RiotMessagingServiceTokenType.hpp>
#include <lol/def/RiotMessagingServiceState.hpp>
namespace lol {
  struct RiotMessagingServiceSession { 
    RiotMessagingServiceState state;
    RiotMessagingServiceTokenType tokenType;
    std::string token; 
  };
  void to_json(json& j, const RiotMessagingServiceSession& v) {
    j["state"] = v.state; 
    j["tokenType"] = v.tokenType; 
    j["token"] = v.token; 
  }
  void from_json(const json& j, RiotMessagingServiceSession& v) {
    v.state = j.at("state").get<RiotMessagingServiceState>(); 
    v.tokenType = j.at("tokenType").get<RiotMessagingServiceTokenType>(); 
    v.token = j.at("token").get<std::string>(); 
  }
}
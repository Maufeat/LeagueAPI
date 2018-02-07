#pragma once
#include "../base_def.hpp" 
#include "RiotMessagingServiceTokenType.hpp"
#include "RiotMessagingServiceState.hpp"
namespace lol {
  struct RiotMessagingServiceSession { 
    RiotMessagingServiceState state;
    std::string token;
    RiotMessagingServiceTokenType tokenType; 
  };
  inline void to_json(json& j, const RiotMessagingServiceSession& v) {
    j["state"] = v.state; 
    j["token"] = v.token; 
    j["tokenType"] = v.tokenType; 
  }
  inline void from_json(const json& j, RiotMessagingServiceSession& v) {
    v.state = j.at("state").get<RiotMessagingServiceState>(); 
    v.token = j.at("token").get<std::string>(); 
    v.tokenType = j.at("tokenType").get<RiotMessagingServiceTokenType>(); 
  }
}
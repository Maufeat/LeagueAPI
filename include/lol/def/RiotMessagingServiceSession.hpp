#pragma once
#include "../base_def.hpp" 
#include "RiotMessagingServiceTokenType.hpp"
#include "RiotMessagingServiceState.hpp"
namespace lol {
  struct RiotMessagingServiceSession { 
    RiotMessagingServiceTokenType tokenType;
    std::string token;
    RiotMessagingServiceState state; 
  };
  inline void to_json(json& j, const RiotMessagingServiceSession& v) {
    j["tokenType"] = v.tokenType; 
    j["token"] = v.token; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, RiotMessagingServiceSession& v) {
    v.tokenType = j.at("tokenType").get<RiotMessagingServiceTokenType>(); 
    v.token = j.at("token").get<std::string>(); 
    v.state = j.at("state").get<RiotMessagingServiceState>(); 
  }
}
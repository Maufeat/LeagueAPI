#pragma once
#include "../base_def.hpp" 
#include "RiotMessagingServiceTokenType.hpp"
#include "RiotMessagingServiceState.hpp"
namespace lol {
  struct RiotMessagingServiceSession { 
    RiotMessagingServiceState state;
    RiotMessagingServiceTokenType tokenType;
    std::string token; 
  };
  inline void to_json(json& j, const RiotMessagingServiceSession& v) {
    j["state"] = v.state; 
    j["tokenType"] = v.tokenType; 
    j["token"] = v.token; 
  }
  inline void from_json(const json& j, RiotMessagingServiceSession& v) {
    v.state = j.at("state").get<RiotMessagingServiceState>(); 
    v.tokenType = j.at("tokenType").get<RiotMessagingServiceTokenType>(); 
    v.token = j.at("token").get<std::string>(); 
  }
}
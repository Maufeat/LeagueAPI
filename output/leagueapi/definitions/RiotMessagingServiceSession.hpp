#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/RiotMessagingServiceState.hpp>"
#include "<leagueapi/definitions/RiotMessagingServiceTokenType.hpp>"

namespace leagueapi {
  struct RiotMessagingServiceSession { /**/ 
    RiotMessagingServiceState state;/**/
    std::string token;/**/
    RiotMessagingServiceTokenType tokenType;/**/
  };
  static void to_json(json& j, const RiotMessagingServiceSession& v) { 
    j["state"] = v.state;
    j["token"] = v.token;
    j["tokenType"] = v.tokenType;
  }
  static void from_json(const json& j, RiotMessagingServiceSession& v) { 
    v.state = j.at("state").get<RiotMessagingServiceState>(); 
    v.token = j.at("token").get<std::string>(); 
    v.tokenType = j.at("tokenType").get<RiotMessagingServiceTokenType>(); 
  }
} 
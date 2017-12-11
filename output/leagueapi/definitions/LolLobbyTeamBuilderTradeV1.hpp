#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderTradeV1 { /**/ 
    std::string state;/**/
    int32_t cellId;/**/
    int32_t id;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderTradeV1& v) { 
    j["state"] = v.state;
    j["cellId"] = v.cellId;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderTradeV1& v) { 
    v.state = j.at("state").get<std::string>(); 
    v.cellId = j.at("cellId").get<int32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
} 
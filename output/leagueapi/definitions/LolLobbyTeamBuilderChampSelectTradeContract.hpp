#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyTeamBuilderChampSelectTradeState.hpp>"

namespace leagueapi {
  struct LolLobbyTeamBuilderChampSelectTradeContract { /**/ 
    LolLobbyTeamBuilderChampSelectTradeState state;/**/
    int64_t cellId;/**/
    int64_t id;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderChampSelectTradeContract& v) { 
    j["state"] = v.state;
    j["cellId"] = v.cellId;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderChampSelectTradeContract& v) { 
    v.state = j.at("state").get<LolLobbyTeamBuilderChampSelectTradeState>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
} 
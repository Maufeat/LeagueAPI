#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyTeamBuilderCellV1.hpp>"

namespace leagueapi {
  struct LolLobbyTeamBuilderCellsV1 { /**/ 
    std::vector<LolLobbyTeamBuilderCellV1> alliedTeam;/**/
    std::vector<LolLobbyTeamBuilderCellV1> enemyTeam;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderCellsV1& v) { 
    j["alliedTeam"] = v.alliedTeam;
    j["enemyTeam"] = v.enemyTeam;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderCellsV1& v) { 
    v.alliedTeam = j.at("alliedTeam").get<std::vector<LolLobbyTeamBuilderCellV1>>(); 
    v.enemyTeam = j.at("enemyTeam").get<std::vector<LolLobbyTeamBuilderCellV1>>(); 
  }
} 
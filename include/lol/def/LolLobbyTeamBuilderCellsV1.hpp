#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderCellV1.hpp"
namespace lol {
  struct LolLobbyTeamBuilderCellsV1 { 
    std::vector<LolLobbyTeamBuilderCellV1> alliedTeam;
    std::vector<LolLobbyTeamBuilderCellV1> enemyTeam; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderCellsV1& v) {
    j["alliedTeam"] = v.alliedTeam; 
    j["enemyTeam"] = v.enemyTeam; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderCellsV1& v) {
    v.alliedTeam = j.at("alliedTeam").get<std::vector<LolLobbyTeamBuilderCellV1>>(); 
    v.enemyTeam = j.at("enemyTeam").get<std::vector<LolLobbyTeamBuilderCellV1>>(); 
  }
}
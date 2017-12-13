#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderCellV1.hpp>
namespace lol {
  struct LolLobbyTeamBuilderCellsV1 { 
    std::vector<LolLobbyTeamBuilderCellV1> alliedTeam;
    std::vector<LolLobbyTeamBuilderCellV1> enemyTeam; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderCellsV1& v) {
  j["alliedTeam"] = v.alliedTeam; 
  j["enemyTeam"] = v.enemyTeam; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderCellsV1& v) {
  v.alliedTeam = j.at("alliedTeam").get<std::vector<LolLobbyTeamBuilderCellV1>>(); 
  v.enemyTeam = j.at("enemyTeam").get<std::vector<LolLobbyTeamBuilderCellV1>>(); 
  }
}
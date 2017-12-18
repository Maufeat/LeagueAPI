#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderGatekeeperRestriction.hpp"
namespace lol {
  struct LolLobbyTeamBuilderGatekeeperRestricted { 
    std::vector<LolLobbyTeamBuilderGatekeeperRestriction> gatekeeperRestrictions; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderGatekeeperRestricted& v) {
    j["gatekeeperRestrictions"] = v.gatekeeperRestrictions; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderGatekeeperRestricted& v) {
    v.gatekeeperRestrictions = j.at("gatekeeperRestrictions").get<std::vector<LolLobbyTeamBuilderGatekeeperRestriction>>(); 
  }
}
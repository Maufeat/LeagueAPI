#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderGatekeeperRestriction.hpp>
namespace lol {
  struct LolLobbyTeamBuilderGatekeeperRestricted { 
    std::vector<LolLobbyTeamBuilderGatekeeperRestriction> gatekeeperRestrictions; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderGatekeeperRestricted& v) {
    j["gatekeeperRestrictions"] = v.gatekeeperRestrictions; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderGatekeeperRestricted& v) {
    v.gatekeeperRestrictions = j.at("gatekeeperRestrictions").get<std::vector<LolLobbyTeamBuilderGatekeeperRestriction>>(); 
  }
}
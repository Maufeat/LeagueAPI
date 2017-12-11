#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyTeamBuilderGatekeeperRestriction.hpp>"

namespace leagueapi {
  struct LolLobbyTeamBuilderGatekeeperRestricted { /**/ 
    std::vector<LolLobbyTeamBuilderGatekeeperRestriction> gatekeeperRestrictions;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderGatekeeperRestricted& v) { 
    j["gatekeeperRestrictions"] = v.gatekeeperRestrictions;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderGatekeeperRestricted& v) { 
    v.gatekeeperRestrictions = j.at("gatekeeperRestrictions").get<std::vector<LolLobbyTeamBuilderGatekeeperRestriction>>(); 
  }
} 
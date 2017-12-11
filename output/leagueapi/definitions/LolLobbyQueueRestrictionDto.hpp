#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyGatekeeperRestrictionDto.hpp>"

namespace leagueapi {
  struct LolLobbyQueueRestrictionDto { /**/ 
    std::vector<LolLobbyGatekeeperRestrictionDto> gatekeeperRestrictions;/**/
  };
  static void to_json(json& j, const LolLobbyQueueRestrictionDto& v) { 
    j["gatekeeperRestrictions"] = v.gatekeeperRestrictions;
  }
  static void from_json(const json& j, LolLobbyQueueRestrictionDto& v) { 
    v.gatekeeperRestrictions = j.at("gatekeeperRestrictions").get<std::vector<LolLobbyGatekeeperRestrictionDto>>(); 
  }
} 
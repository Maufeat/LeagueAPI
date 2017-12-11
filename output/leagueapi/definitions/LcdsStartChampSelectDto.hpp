#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LcdsFailedJoinPlayer.hpp>"

namespace leagueapi {
  struct LcdsStartChampSelectDto { /**/ 
    std::vector<LcdsFailedJoinPlayer> invalidPlayers;/**/
  };
  static void to_json(json& j, const LcdsStartChampSelectDto& v) { 
    j["invalidPlayers"] = v.invalidPlayers;
  }
  static void from_json(const json& j, LcdsStartChampSelectDto& v) { 
    v.invalidPlayers = j.at("invalidPlayers").get<std::vector<LcdsFailedJoinPlayer>>(); 
  }
} 
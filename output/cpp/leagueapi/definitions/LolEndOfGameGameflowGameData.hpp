#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEndOfGameGameflowGameData { /**/ 
    uint64_t gameId;/**/
  };
  static void to_json(json& j, const LolEndOfGameGameflowGameData& v) { 
    j["gameId"] = v.gameId;
  }
  static void from_json(const json& j, LolEndOfGameGameflowGameData& v) { 
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolMatchmakingGameflowGameTypeConfig.hpp>

namespace leagueapi {
  struct LolMatchmakingGameflowQueue { /**/ 
    LolMatchmakingGameflowGameTypeConfig gameTypeConfig;/**/
  };
  static void to_json(json& j, const LolMatchmakingGameflowQueue& v) { 
    j["gameTypeConfig"] = v.gameTypeConfig;
  }
  static void from_json(const json& j, LolMatchmakingGameflowQueue& v) { 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolMatchmakingGameflowGameTypeConfig>(); 
  }
} 
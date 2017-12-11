#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMatchmakingGameflowGameTypeConfig { /**/ 
    bool reroll;/**/
  };
  static void to_json(json& j, const LolMatchmakingGameflowGameTypeConfig& v) { 
    j["reroll"] = v.reroll;
  }
  static void from_json(const json& j, LolMatchmakingGameflowGameTypeConfig& v) { 
    v.reroll = j.at("reroll").get<bool>(); 
  }
} 
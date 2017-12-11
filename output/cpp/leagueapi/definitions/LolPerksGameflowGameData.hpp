#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPerksQueue.hpp>

namespace leagueapi {
  struct LolPerksGameflowGameData { /**/ 
    LolPerksQueue queue;/**/
    bool isCustomGame;/**/
  };
  static void to_json(json& j, const LolPerksGameflowGameData& v) { 
    j["queue"] = v.queue;
    j["isCustomGame"] = v.isCustomGame;
  }
  static void from_json(const json& j, LolPerksGameflowGameData& v) { 
    v.queue = j.at("queue").get<LolPerksQueue>(); 
    v.isCustomGame = j.at("isCustomGame").get<bool>(); 
  }
} 
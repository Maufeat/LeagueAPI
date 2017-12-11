#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChampSelectLegacyQueueGameTypeConfig.hpp>"

namespace leagueapi {
  struct LolChampSelectLegacyQueue { /**/ 
    bool areFreeChampionsAllowed;/**/
    LolChampSelectLegacyQueueGameTypeConfig gameTypeConfig;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyQueue& v) { 
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["gameTypeConfig"] = v.gameTypeConfig;
  }
  static void from_json(const json& j, LolChampSelectLegacyQueue& v) { 
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolChampSelectLegacyQueueGameTypeConfig>(); 
  }
} 
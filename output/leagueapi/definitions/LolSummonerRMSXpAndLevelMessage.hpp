#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolSummonerRMSLevelField.hpp>"

namespace leagueapi {
  struct LolSummonerRMSXpAndLevelMessage { /**/ 
    LolSummonerRMSLevelField level;/**/
    json xp;/**/
  };
  static void to_json(json& j, const LolSummonerRMSXpAndLevelMessage& v) { 
    j["level"] = v.level;
    j["xp"] = v.xp;
  }
  static void from_json(const json& j, LolSummonerRMSXpAndLevelMessage& v) { 
    v.level = j.at("level").get<LolSummonerRMSLevelField>(); 
    v.xp = j.at("xp").get<json>(); 
  }
} 
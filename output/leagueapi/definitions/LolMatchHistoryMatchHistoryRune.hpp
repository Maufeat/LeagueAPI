#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryRune { /**/ 
    uint16_t rank;/**/
    uint16_t runeId;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryRune& v) { 
    j["rank"] = v.rank;
    j["runeId"] = v.runeId;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryRune& v) { 
    v.rank = j.at("rank").get<uint16_t>(); 
    v.runeId = j.at("runeId").get<uint16_t>(); 
  }
} 
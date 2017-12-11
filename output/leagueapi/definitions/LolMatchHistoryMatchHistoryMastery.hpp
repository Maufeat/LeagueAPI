#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryMastery { /**/ 
    uint16_t rank;/**/
    uint16_t masteryId;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryMastery& v) { 
    j["rank"] = v.rank;
    j["masteryId"] = v.masteryId;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryMastery& v) { 
    v.rank = j.at("rank").get<uint16_t>(); 
    v.masteryId = j.at("masteryId").get<uint16_t>(); 
  }
} 
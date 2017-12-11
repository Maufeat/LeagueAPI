#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEndOfGameChampionMasteryMini { /**/ 
    uint64_t playerId;/**/
    int64_t championLevel;/**/
    int32_t championId;/**/
  };
  static void to_json(json& j, const LolEndOfGameChampionMasteryMini& v) { 
    j["playerId"] = v.playerId;
    j["championLevel"] = v.championLevel;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, LolEndOfGameChampionMasteryMini& v) { 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.championLevel = j.at("championLevel").get<int64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
} 
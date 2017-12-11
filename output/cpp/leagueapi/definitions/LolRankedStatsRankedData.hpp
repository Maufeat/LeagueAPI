#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolRankedStatsRankedEntry.hpp>

namespace leagueapi {
  struct LolRankedStatsRankedData { /**/ 
    std::vector<LolRankedStatsRankedEntry> rankedData;/**/
    uint64_t summonerId;/**/
  };
  static void to_json(json& j, const LolRankedStatsRankedData& v) { 
    j["rankedData"] = v.rankedData;
    j["summonerId"] = v.summonerId;
  }
  static void from_json(const json& j, LolRankedStatsRankedData& v) { 
    v.rankedData = j.at("rankedData").get<std::vector<LolRankedStatsRankedEntry>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
} 
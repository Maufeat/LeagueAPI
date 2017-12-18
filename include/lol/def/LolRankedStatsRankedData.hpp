#pragma once
#include "../base_def.hpp" 
#include "LolRankedStatsRankedEntry.hpp"
namespace lol {
  struct LolRankedStatsRankedData { 
    std::vector<LolRankedStatsRankedEntry> rankedData;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolRankedStatsRankedData& v) {
    j["rankedData"] = v.rankedData; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolRankedStatsRankedData& v) {
    v.rankedData = j.at("rankedData").get<std::vector<LolRankedStatsRankedEntry>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
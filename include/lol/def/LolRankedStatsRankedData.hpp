#pragma once
#include "../base_def.hpp" 
#include "LolRankedStatsRankedEntry.hpp"
namespace lol {
  struct LolRankedStatsRankedData { 
    uint64_t summonerId;
    std::vector<LolRankedStatsRankedEntry> rankedData; 
  };
  inline void to_json(json& j, const LolRankedStatsRankedData& v) {
    j["summonerId"] = v.summonerId; 
    j["rankedData"] = v.rankedData; 
  }
  inline void from_json(const json& j, LolRankedStatsRankedData& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.rankedData = j.at("rankedData").get<std::vector<LolRankedStatsRankedEntry>>(); 
  }
}
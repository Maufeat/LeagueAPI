#pragma once
#include "../base_def.hpp" 
#include "LolRankedStatsRankedQueue.hpp"
#include "LolRankedStatsRankedTier.hpp"
namespace lol {
  struct LolRankedStatsRankedEntry { 
    bool isApexTier;
    LolRankedStatsRankedTier rankedTier;
    uint64_t division;
    uint64_t wins;
    LolRankedStatsRankedQueue rankedQueue;
    uint64_t games;
    int64_t apexDaysUntilDecay;
    int64_t lp;
    std::string leagueName; 
  };
  inline void to_json(json& j, const LolRankedStatsRankedEntry& v) {
    j["isApexTier"] = v.isApexTier; 
    j["rankedTier"] = v.rankedTier; 
    j["division"] = v.division; 
    j["wins"] = v.wins; 
    j["rankedQueue"] = v.rankedQueue; 
    j["games"] = v.games; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["lp"] = v.lp; 
    j["leagueName"] = v.leagueName; 
  }
  inline void from_json(const json& j, LolRankedStatsRankedEntry& v) {
    v.isApexTier = j.at("isApexTier").get<bool>(); 
    v.rankedTier = j.at("rankedTier").get<LolRankedStatsRankedTier>(); 
    v.division = j.at("division").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.rankedQueue = j.at("rankedQueue").get<LolRankedStatsRankedQueue>(); 
    v.games = j.at("games").get<uint64_t>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>(); 
    v.lp = j.at("lp").get<int64_t>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
  }
}
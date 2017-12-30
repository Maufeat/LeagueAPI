#pragma once
#include "../base_def.hpp" 
#include "LolRankedStatsRankedQueue.hpp"
#include "LolRankedStatsRankedTier.hpp"
namespace lol {
  struct LolRankedStatsRankedEntry { 
    LolRankedStatsRankedQueue rankedQueue;
    uint64_t games;
    int64_t apexDaysUntilDecay;
    LolRankedStatsRankedTier rankedTier;
    int64_t lp;
    uint64_t division;
    bool isApexTier;
    uint64_t wins;
    std::string leagueName; 
  };
  inline void to_json(json& j, const LolRankedStatsRankedEntry& v) {
    j["rankedQueue"] = v.rankedQueue; 
    j["games"] = v.games; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["rankedTier"] = v.rankedTier; 
    j["lp"] = v.lp; 
    j["division"] = v.division; 
    j["isApexTier"] = v.isApexTier; 
    j["wins"] = v.wins; 
    j["leagueName"] = v.leagueName; 
  }
  inline void from_json(const json& j, LolRankedStatsRankedEntry& v) {
    v.rankedQueue = j.at("rankedQueue").get<LolRankedStatsRankedQueue>(); 
    v.games = j.at("games").get<uint64_t>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>(); 
    v.rankedTier = j.at("rankedTier").get<LolRankedStatsRankedTier>(); 
    v.lp = j.at("lp").get<int64_t>(); 
    v.division = j.at("division").get<uint64_t>(); 
    v.isApexTier = j.at("isApexTier").get<bool>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
  }
}
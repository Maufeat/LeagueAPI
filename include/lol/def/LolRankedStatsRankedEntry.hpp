#pragma once
#include "../base_def.hpp" 
#include "LolRankedStatsRankedTier.hpp"
#include "LolRankedStatsRankedQueue.hpp"
namespace lol {
  struct LolRankedStatsRankedEntry { 
    LolRankedStatsRankedQueue rankedQueue;
    LolRankedStatsRankedTier rankedTier;
    bool isApexTier;
    int64_t apexDaysUntilDecay;
    uint64_t division;
    int64_t lp;
    std::string leagueName;
    uint64_t wins;
    uint64_t games; 
  };
  inline void to_json(json& j, const LolRankedStatsRankedEntry& v) {
    j["rankedQueue"] = v.rankedQueue; 
    j["rankedTier"] = v.rankedTier; 
    j["isApexTier"] = v.isApexTier; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["division"] = v.division; 
    j["lp"] = v.lp; 
    j["leagueName"] = v.leagueName; 
    j["wins"] = v.wins; 
    j["games"] = v.games; 
  }
  inline void from_json(const json& j, LolRankedStatsRankedEntry& v) {
    v.rankedQueue = j.at("rankedQueue").get<LolRankedStatsRankedQueue>(); 
    v.rankedTier = j.at("rankedTier").get<LolRankedStatsRankedTier>(); 
    v.isApexTier = j.at("isApexTier").get<bool>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>(); 
    v.division = j.at("division").get<uint64_t>(); 
    v.lp = j.at("lp").get<int64_t>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.games = j.at("games").get<uint64_t>(); 
  }
}
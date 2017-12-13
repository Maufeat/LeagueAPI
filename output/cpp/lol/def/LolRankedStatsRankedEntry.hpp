#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolRankedStatsRankedTier.hpp>
#include <lol/def/LolRankedStatsRankedQueue.hpp>
namespace lol {
  struct LolRankedStatsRankedEntry { 
    LolRankedStatsRankedTier rankedTier;
    uint64_t wins;
    uint64_t division;
    int64_t apexDaysUntilDecay;
    uint64_t games;
    LolRankedStatsRankedQueue rankedQueue;
    bool isApexTier;
    std::string leagueName;
    int64_t lp; 
  };
  void to_json(json& j, const LolRankedStatsRankedEntry& v) {
    j["rankedTier"] = v.rankedTier; 
    j["wins"] = v.wins; 
    j["division"] = v.division; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["games"] = v.games; 
    j["rankedQueue"] = v.rankedQueue; 
    j["isApexTier"] = v.isApexTier; 
    j["leagueName"] = v.leagueName; 
    j["lp"] = v.lp; 
  }
  void from_json(const json& j, LolRankedStatsRankedEntry& v) {
    v.rankedTier = j.at("rankedTier").get<LolRankedStatsRankedTier>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.division = j.at("division").get<uint64_t>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>(); 
    v.games = j.at("games").get<uint64_t>(); 
    v.rankedQueue = j.at("rankedQueue").get<LolRankedStatsRankedQueue>(); 
    v.isApexTier = j.at("isApexTier").get<bool>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.lp = j.at("lp").get<int64_t>(); 
  }
}
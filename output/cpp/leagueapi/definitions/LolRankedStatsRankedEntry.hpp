#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolRankedStatsRankedQueue.hpp>
#include <leagueapi/definitions/LolRankedStatsRankedTier.hpp>

namespace leagueapi {
  struct LolRankedStatsRankedEntry { /**/ 
    std::string leagueName;/**/
    LolRankedStatsRankedTier rankedTier;/**/
    bool isApexTier;/**/
    LolRankedStatsRankedQueue rankedQueue;/**/
    uint64_t games;/**/
    uint64_t wins;/**/
    int64_t apexDaysUntilDecay;/**/
    int64_t lp;/**/
    uint64_t division;/**/
  };
  static void to_json(json& j, const LolRankedStatsRankedEntry& v) { 
    j["leagueName"] = v.leagueName;
    j["rankedTier"] = v.rankedTier;
    j["isApexTier"] = v.isApexTier;
    j["rankedQueue"] = v.rankedQueue;
    j["games"] = v.games;
    j["wins"] = v.wins;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["lp"] = v.lp;
    j["division"] = v.division;
  }
  static void from_json(const json& j, LolRankedStatsRankedEntry& v) { 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.rankedTier = j.at("rankedTier").get<LolRankedStatsRankedTier>(); 
    v.isApexTier = j.at("isApexTier").get<bool>(); 
    v.rankedQueue = j.at("rankedQueue").get<LolRankedStatsRankedQueue>(); 
    v.games = j.at("games").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>(); 
    v.lp = j.at("lp").get<int64_t>(); 
    v.division = j.at("division").get<uint64_t>(); 
  }
} 
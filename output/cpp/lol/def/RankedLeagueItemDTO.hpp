#pragma once
#include "../base_def.hpp" 
#include "LolRankedStatsRankedQueue.hpp"
#include "LolRankedStatsRankedTier.hpp"
#include "RankedLeagueMiniSeriesDTO.hpp"
#include "RankedDivision.hpp"
namespace lol {
  struct RankedLeagueItemDTO { 
    RankedLeagueMiniSeriesDTO miniSeries;
    int32_t apexDaysUntilDecay;
    LolRankedStatsRankedTier tier;
    uint32_t wins;
    std::string leagueName;
    std::string playerOrTeamId;
    RankedDivision rank;
    int32_t leaguePoints;
    bool inactive;
    uint32_t loses;
    std::string playerOrTeamName;
    LolRankedStatsRankedQueue queueType; 
  };
  inline void to_json(json& j, const RankedLeagueItemDTO& v) {
    j["miniSeries"] = v.miniSeries; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["tier"] = v.tier; 
    j["wins"] = v.wins; 
    j["leagueName"] = v.leagueName; 
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["rank"] = v.rank; 
    j["leaguePoints"] = v.leaguePoints; 
    j["inactive"] = v.inactive; 
    j["loses"] = v.loses; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
    j["queueType"] = v.queueType; 
  }
  inline void from_json(const json& j, RankedLeagueItemDTO& v) {
    v.miniSeries = j.at("miniSeries").get<RankedLeagueMiniSeriesDTO>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>(); 
    v.tier = j.at("tier").get<LolRankedStatsRankedTier>(); 
    v.wins = j.at("wins").get<uint32_t>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.rank = j.at("rank").get<RankedDivision>(); 
    v.leaguePoints = j.at("leaguePoints").get<int32_t>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.loses = j.at("loses").get<uint32_t>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.queueType = j.at("queueType").get<LolRankedStatsRankedQueue>(); 
  }
}
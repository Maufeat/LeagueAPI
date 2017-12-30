#pragma once
#include "../base_def.hpp" 
#include "RankedLeagueMiniSeriesDTO.hpp"
#include "LolRankedStatsRankedTier.hpp"
#include "RankedDivision.hpp"
#include "LolRankedStatsRankedQueue.hpp"
namespace lol {
  struct RankedLeagueItemDTO { 
    int32_t leaguePoints;
    std::string playerOrTeamId;
    int32_t apexDaysUntilDecay;
    std::string leagueName;
    LolRankedStatsRankedTier tier;
    RankedDivision rank;
    uint32_t wins;
    RankedLeagueMiniSeriesDTO miniSeries;
    LolRankedStatsRankedQueue queueType;
    bool inactive;
    uint32_t loses;
    std::string playerOrTeamName; 
  };
  inline void to_json(json& j, const RankedLeagueItemDTO& v) {
    j["leaguePoints"] = v.leaguePoints; 
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["leagueName"] = v.leagueName; 
    j["tier"] = v.tier; 
    j["rank"] = v.rank; 
    j["wins"] = v.wins; 
    j["miniSeries"] = v.miniSeries; 
    j["queueType"] = v.queueType; 
    j["inactive"] = v.inactive; 
    j["loses"] = v.loses; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
  }
  inline void from_json(const json& j, RankedLeagueItemDTO& v) {
    v.leaguePoints = j.at("leaguePoints").get<int32_t>(); 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.tier = j.at("tier").get<LolRankedStatsRankedTier>(); 
    v.rank = j.at("rank").get<RankedDivision>(); 
    v.wins = j.at("wins").get<uint32_t>(); 
    v.miniSeries = j.at("miniSeries").get<RankedLeagueMiniSeriesDTO>(); 
    v.queueType = j.at("queueType").get<LolRankedStatsRankedQueue>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.loses = j.at("loses").get<uint32_t>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
  }
}
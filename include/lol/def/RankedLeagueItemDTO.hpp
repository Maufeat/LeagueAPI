#pragma once
#include "../base_def.hpp" 
#include "LolRankedStatsRankedQueue.hpp"
#include "LolRankedStatsRankedTier.hpp"
#include "RankedLeagueMiniSeriesDTO.hpp"
#include "RankedDivision.hpp"
namespace lol {
  struct RankedLeagueItemDTO { 
    RankedLeagueMiniSeriesDTO miniSeries;
    RankedDivision rank;
    std::string playerOrTeamId;
    LolRankedStatsRankedQueue queueType;
    LolRankedStatsRankedTier tier;
    uint32_t wins;
    std::string playerOrTeamName;
    uint32_t loses;
    int32_t leaguePoints;
    std::string leagueName;
    int32_t apexDaysUntilDecay;
    bool inactive; 
  };
  inline void to_json(json& j, const RankedLeagueItemDTO& v) {
    j["miniSeries"] = v.miniSeries; 
    j["rank"] = v.rank; 
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["queueType"] = v.queueType; 
    j["tier"] = v.tier; 
    j["wins"] = v.wins; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
    j["loses"] = v.loses; 
    j["leaguePoints"] = v.leaguePoints; 
    j["leagueName"] = v.leagueName; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["inactive"] = v.inactive; 
  }
  inline void from_json(const json& j, RankedLeagueItemDTO& v) {
    v.miniSeries = j.at("miniSeries").get<RankedLeagueMiniSeriesDTO>(); 
    v.rank = j.at("rank").get<RankedDivision>(); 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.queueType = j.at("queueType").get<LolRankedStatsRankedQueue>(); 
    v.tier = j.at("tier").get<LolRankedStatsRankedTier>(); 
    v.wins = j.at("wins").get<uint32_t>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.loses = j.at("loses").get<uint32_t>(); 
    v.leaguePoints = j.at("leaguePoints").get<int32_t>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>(); 
    v.inactive = j.at("inactive").get<bool>(); 
  }
}
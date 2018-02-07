#pragma once
#include "../base_def.hpp" 
#include "RankedLeagueMiniSeriesDTO.hpp"
#include "LolRankedStatsRankedTier.hpp"
#include "RankedDivision.hpp"
#include "LolRankedStatsRankedQueue.hpp"
namespace lol {
  struct RankedLeagueItemDTO { 
    std::string leagueName;
    LolRankedStatsRankedQueue queueType;
    LolRankedStatsRankedTier tier;
    RankedDivision rank;
    int32_t leaguePoints;
    bool inactive;
    uint32_t wins;
    uint32_t loses;
    std::string playerOrTeamId;
    std::string playerOrTeamName;
    int32_t apexDaysUntilDecay;
    RankedLeagueMiniSeriesDTO miniSeries; 
  };
  inline void to_json(json& j, const RankedLeagueItemDTO& v) {
    j["leagueName"] = v.leagueName; 
    j["queueType"] = v.queueType; 
    j["tier"] = v.tier; 
    j["rank"] = v.rank; 
    j["leaguePoints"] = v.leaguePoints; 
    j["inactive"] = v.inactive; 
    j["wins"] = v.wins; 
    j["loses"] = v.loses; 
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["miniSeries"] = v.miniSeries; 
  }
  inline void from_json(const json& j, RankedLeagueItemDTO& v) {
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.queueType = j.at("queueType").get<LolRankedStatsRankedQueue>(); 
    v.tier = j.at("tier").get<LolRankedStatsRankedTier>(); 
    v.rank = j.at("rank").get<RankedDivision>(); 
    v.leaguePoints = j.at("leaguePoints").get<int32_t>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.wins = j.at("wins").get<uint32_t>(); 
    v.loses = j.at("loses").get<uint32_t>(); 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>(); 
    v.miniSeries = j.at("miniSeries").get<RankedLeagueMiniSeriesDTO>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RankedDivision.hpp>
#include <lol/def/LolRankedStatsRankedTier.hpp>
#include <lol/def/RankedLeagueMiniSeriesDTO.hpp>
#include <lol/def/LolRankedStatsRankedQueue.hpp>
namespace lol {
  struct RankedLeagueItemDTO { 
    bool inactive;
    std::string leagueName;
    int32_t leaguePoints;
    LolRankedStatsRankedQueue queueType;
    RankedDivision rank;
    uint32_t wins;
    int32_t apexDaysUntilDecay;
    LolRankedStatsRankedTier tier;
    uint32_t loses;
    std::string playerOrTeamName;
    RankedLeagueMiniSeriesDTO miniSeries;
    std::string playerOrTeamId; 
  };
  void to_json(json& j, const RankedLeagueItemDTO& v) {
  j["inactive"] = v.inactive; 
  j["leagueName"] = v.leagueName; 
  j["leaguePoints"] = v.leaguePoints; 
  j["queueType"] = v.queueType; 
  j["rank"] = v.rank; 
  j["wins"] = v.wins; 
  j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
  j["tier"] = v.tier; 
  j["loses"] = v.loses; 
  j["playerOrTeamName"] = v.playerOrTeamName; 
  j["miniSeries"] = v.miniSeries; 
  j["playerOrTeamId"] = v.playerOrTeamId; 
  }
  void from_json(const json& j, RankedLeagueItemDTO& v) {
  v.inactive = j.at("inactive").get<bool>(); 
  v.leagueName = j.at("leagueName").get<std::string>(); 
  v.leaguePoints = j.at("leaguePoints").get<int32_t>(); 
  v.queueType = j.at("queueType").get<LolRankedStatsRankedQueue>(); 
  v.rank = j.at("rank").get<RankedDivision>(); 
  v.wins = j.at("wins").get<uint32_t>(); 
  v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>(); 
  v.tier = j.at("tier").get<LolRankedStatsRankedTier>(); 
  v.loses = j.at("loses").get<uint32_t>(); 
  v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
  v.miniSeries = j.at("miniSeries").get<RankedLeagueMiniSeriesDTO>(); 
  v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
  }
}
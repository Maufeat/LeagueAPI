#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsMiniSeriesDTO.hpp"
namespace lol {
  struct LeaguesLcdsLeagueItemDTO { 
    std::string playerOrTeamId;
    std::string playerOrTeamName;
    uint64_t previousDayLeaguePosition;
    uint64_t wins;
    uint64_t losses;
    bool hotStreak;
    bool veteran;
    bool freshBlood;
    LeaguesLcdsMiniSeriesDTO miniSeries;
    int32_t leaguePoints;
    LeaguesLcdsQueueType queueType;
    LeaguesLcdsLeagueTier tier;
    LeaguesLcdsLeagueRank rank;
    bool inactive;
    bool displayDecayWarning;
    std::string inactivityStatus;
    uint64_t timeUntilInactivityStatusChanges;
    uint64_t demotionWarning;
    int32_t apexDaysUntilDecay; 
  };
  inline void to_json(json& j, const LeaguesLcdsLeagueItemDTO& v) {
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
    j["previousDayLeaguePosition"] = v.previousDayLeaguePosition; 
    j["wins"] = v.wins; 
    j["losses"] = v.losses; 
    j["hotStreak"] = v.hotStreak; 
    j["veteran"] = v.veteran; 
    j["freshBlood"] = v.freshBlood; 
    j["miniSeries"] = v.miniSeries; 
    j["leaguePoints"] = v.leaguePoints; 
    j["queueType"] = v.queueType; 
    j["tier"] = v.tier; 
    j["rank"] = v.rank; 
    j["inactive"] = v.inactive; 
    j["displayDecayWarning"] = v.displayDecayWarning; 
    j["inactivityStatus"] = v.inactivityStatus; 
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges; 
    j["demotionWarning"] = v.demotionWarning; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
  }
  inline void from_json(const json& j, LeaguesLcdsLeagueItemDTO& v) {
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.previousDayLeaguePosition = j.at("previousDayLeaguePosition").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.hotStreak = j.at("hotStreak").get<bool>(); 
    v.veteran = j.at("veteran").get<bool>(); 
    v.freshBlood = j.at("freshBlood").get<bool>(); 
    v.miniSeries = j.at("miniSeries").get<LeaguesLcdsMiniSeriesDTO>(); 
    v.leaguePoints = j.at("leaguePoints").get<int32_t>(); 
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>(); 
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>(); 
    v.demotionWarning = j.at("demotionWarning").get<uint64_t>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>(); 
  }
}
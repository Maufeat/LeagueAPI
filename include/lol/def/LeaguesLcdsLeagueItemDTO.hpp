#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsLeagueRank.hpp"
#include "LeaguesLcdsMiniSeriesDTO.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
namespace lol {
  struct LeaguesLcdsLeagueItemDTO { 
    int32_t apexDaysUntilDecay;
    LeaguesLcdsMiniSeriesDTO miniSeries;
    LeaguesLcdsLeagueRank rank;
    std::string playerOrTeamId;
    bool displayDecayWarning;
    LeaguesLcdsQueueType queueType;
    LeaguesLcdsLeagueTier tier;
    uint64_t wins;
    std::string inactivityStatus;
    std::string playerOrTeamName;
    int32_t leaguePoints;
    bool hotStreak;
    bool inactive;
    uint64_t previousDayLeaguePosition;
    uint64_t losses;
    uint64_t timeUntilInactivityStatusChanges;
    bool freshBlood;
    uint64_t demotionWarning;
    bool veteran; 
  };
  inline void to_json(json& j, const LeaguesLcdsLeagueItemDTO& v) {
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["miniSeries"] = v.miniSeries; 
    j["rank"] = v.rank; 
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["displayDecayWarning"] = v.displayDecayWarning; 
    j["queueType"] = v.queueType; 
    j["tier"] = v.tier; 
    j["wins"] = v.wins; 
    j["inactivityStatus"] = v.inactivityStatus; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
    j["leaguePoints"] = v.leaguePoints; 
    j["hotStreak"] = v.hotStreak; 
    j["inactive"] = v.inactive; 
    j["previousDayLeaguePosition"] = v.previousDayLeaguePosition; 
    j["losses"] = v.losses; 
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges; 
    j["freshBlood"] = v.freshBlood; 
    j["demotionWarning"] = v.demotionWarning; 
    j["veteran"] = v.veteran; 
  }
  inline void from_json(const json& j, LeaguesLcdsLeagueItemDTO& v) {
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>(); 
    v.miniSeries = j.at("miniSeries").get<LeaguesLcdsMiniSeriesDTO>(); 
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>(); 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>(); 
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.leaguePoints = j.at("leaguePoints").get<int32_t>(); 
    v.hotStreak = j.at("hotStreak").get<bool>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.previousDayLeaguePosition = j.at("previousDayLeaguePosition").get<uint64_t>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>(); 
    v.freshBlood = j.at("freshBlood").get<bool>(); 
    v.demotionWarning = j.at("demotionWarning").get<uint64_t>(); 
    v.veteran = j.at("veteran").get<bool>(); 
  }
}
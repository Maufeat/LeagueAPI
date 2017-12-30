#pragma once
#include "../base_def.hpp" 
#include "LeaguesLcdsMiniSeriesDTO.hpp"
#include "LeaguesLcdsQueueType.hpp"
#include "LeaguesLcdsLeagueTier.hpp"
#include "LeaguesLcdsLeagueRank.hpp"
namespace lol {
  struct LolLeaguesSignedLeagueItemDTO { 
    std::string playerOrTeamId;
    int32_t leaguePoints;
    std::string jwt;
    int32_t apexDaysUntilDecay;
    std::string inactivityStatus;
    LeaguesLcdsLeagueTier tier;
    bool hotStreak;
    LeaguesLcdsLeagueRank rank;
    uint64_t losses;
    bool displayDecayWarning;
    LeaguesLcdsMiniSeriesDTO miniSeries;
    uint64_t timeUntilInactivityStatusChanges;
    uint64_t previousDayLeaguePosition;
    uint64_t demotionWarning;
    bool freshBlood;
    LeaguesLcdsQueueType queueType;
    bool inactive;
    bool veteran;
    uint64_t wins;
    std::string playerOrTeamName; 
  };
  inline void to_json(json& j, const LolLeaguesSignedLeagueItemDTO& v) {
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["leaguePoints"] = v.leaguePoints; 
    j["jwt"] = v.jwt; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["inactivityStatus"] = v.inactivityStatus; 
    j["tier"] = v.tier; 
    j["hotStreak"] = v.hotStreak; 
    j["rank"] = v.rank; 
    j["losses"] = v.losses; 
    j["displayDecayWarning"] = v.displayDecayWarning; 
    j["miniSeries"] = v.miniSeries; 
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges; 
    j["previousDayLeaguePosition"] = v.previousDayLeaguePosition; 
    j["demotionWarning"] = v.demotionWarning; 
    j["freshBlood"] = v.freshBlood; 
    j["queueType"] = v.queueType; 
    j["inactive"] = v.inactive; 
    j["veteran"] = v.veteran; 
    j["wins"] = v.wins; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
  }
  inline void from_json(const json& j, LolLeaguesSignedLeagueItemDTO& v) {
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.leaguePoints = j.at("leaguePoints").get<int32_t>(); 
    v.jwt = j.at("jwt").get<std::string>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>(); 
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.hotStreak = j.at("hotStreak").get<bool>(); 
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>(); 
    v.miniSeries = j.at("miniSeries").get<LeaguesLcdsMiniSeriesDTO>(); 
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>(); 
    v.previousDayLeaguePosition = j.at("previousDayLeaguePosition").get<uint64_t>(); 
    v.demotionWarning = j.at("demotionWarning").get<uint64_t>(); 
    v.freshBlood = j.at("freshBlood").get<bool>(); 
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.veteran = j.at("veteran").get<bool>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
  }
}
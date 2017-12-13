#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsQueueType.hpp>
#include <lol/def/LeaguesLcdsLeagueRank.hpp>
#include <lol/def/LeaguesLcdsMiniSeriesDTO.hpp>
#include <lol/def/LeaguesLcdsLeagueTier.hpp>
namespace lol {
  struct LeaguesLcdsLeagueItemDTO { 
    std::string inactivityStatus;
    LeaguesLcdsMiniSeriesDTO miniSeries;
    uint64_t wins;
    int32_t apexDaysUntilDecay;
    LeaguesLcdsLeagueTier tier;
    uint64_t timeUntilInactivityStatusChanges;
    bool displayDecayWarning;
    bool hotStreak;
    bool veteran;
    std::string playerOrTeamId;
    uint64_t demotionWarning;
    LeaguesLcdsLeagueRank rank;
    int32_t leaguePoints;
    bool inactive;
    uint64_t losses;
    bool freshBlood;
    uint64_t previousDayLeaguePosition;
    std::string playerOrTeamName;
    LeaguesLcdsQueueType queueType; 
  };
  void to_json(json& j, const LeaguesLcdsLeagueItemDTO& v) {
    j["inactivityStatus"] = v.inactivityStatus; 
    j["miniSeries"] = v.miniSeries; 
    j["wins"] = v.wins; 
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
    j["tier"] = v.tier; 
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges; 
    j["displayDecayWarning"] = v.displayDecayWarning; 
    j["hotStreak"] = v.hotStreak; 
    j["veteran"] = v.veteran; 
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["demotionWarning"] = v.demotionWarning; 
    j["rank"] = v.rank; 
    j["leaguePoints"] = v.leaguePoints; 
    j["inactive"] = v.inactive; 
    j["losses"] = v.losses; 
    j["freshBlood"] = v.freshBlood; 
    j["previousDayLeaguePosition"] = v.previousDayLeaguePosition; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
    j["queueType"] = v.queueType; 
  }
  void from_json(const json& j, LeaguesLcdsLeagueItemDTO& v) {
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
    v.miniSeries = j.at("miniSeries").get<LeaguesLcdsMiniSeriesDTO>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>(); 
    v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>(); 
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>(); 
    v.hotStreak = j.at("hotStreak").get<bool>(); 
    v.veteran = j.at("veteran").get<bool>(); 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.demotionWarning = j.at("demotionWarning").get<uint64_t>(); 
    v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>(); 
    v.leaguePoints = j.at("leaguePoints").get<int32_t>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.freshBlood = j.at("freshBlood").get<bool>(); 
    v.previousDayLeaguePosition = j.at("previousDayLeaguePosition").get<uint64_t>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>(); 
  }
}
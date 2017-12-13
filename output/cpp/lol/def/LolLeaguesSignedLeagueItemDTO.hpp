#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsQueueType.hpp>
#include <lol/def/LeaguesLcdsMiniSeriesDTO.hpp>
#include <lol/def/LeaguesLcdsLeagueRank.hpp>
#include <lol/def/LeaguesLcdsLeagueTier.hpp>
namespace lol {
  struct LolLeaguesSignedLeagueItemDTO { 
    bool inactive;
    LeaguesLcdsLeagueTier tier;
    int32_t leaguePoints;
    LeaguesLcdsQueueType queueType;
    LeaguesLcdsMiniSeriesDTO miniSeries;
    uint64_t previousDayLeaguePosition;
    uint64_t wins;
    int32_t apexDaysUntilDecay;
    uint64_t timeUntilInactivityStatusChanges;
    std::string playerOrTeamName;
    bool freshBlood;
    std::string jwt;
    bool hotStreak;
    uint64_t losses;
    bool displayDecayWarning;
    std::string playerOrTeamId;
    uint64_t demotionWarning;
    LeaguesLcdsLeagueRank rank;
    bool veteran;
    std::string inactivityStatus; 
  };
  void to_json(json& j, const LolLeaguesSignedLeagueItemDTO& v) {
  j["inactive"] = v.inactive; 
  j["tier"] = v.tier; 
  j["leaguePoints"] = v.leaguePoints; 
  j["queueType"] = v.queueType; 
  j["miniSeries"] = v.miniSeries; 
  j["previousDayLeaguePosition"] = v.previousDayLeaguePosition; 
  j["wins"] = v.wins; 
  j["apexDaysUntilDecay"] = v.apexDaysUntilDecay; 
  j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges; 
  j["playerOrTeamName"] = v.playerOrTeamName; 
  j["freshBlood"] = v.freshBlood; 
  j["jwt"] = v.jwt; 
  j["hotStreak"] = v.hotStreak; 
  j["losses"] = v.losses; 
  j["displayDecayWarning"] = v.displayDecayWarning; 
  j["playerOrTeamId"] = v.playerOrTeamId; 
  j["demotionWarning"] = v.demotionWarning; 
  j["rank"] = v.rank; 
  j["veteran"] = v.veteran; 
  j["inactivityStatus"] = v.inactivityStatus; 
  }
  void from_json(const json& j, LolLeaguesSignedLeagueItemDTO& v) {
  v.inactive = j.at("inactive").get<bool>(); 
  v.tier = j.at("tier").get<LeaguesLcdsLeagueTier>(); 
  v.leaguePoints = j.at("leaguePoints").get<int32_t>(); 
  v.queueType = j.at("queueType").get<LeaguesLcdsQueueType>(); 
  v.miniSeries = j.at("miniSeries").get<LeaguesLcdsMiniSeriesDTO>(); 
  v.previousDayLeaguePosition = j.at("previousDayLeaguePosition").get<uint64_t>(); 
  v.wins = j.at("wins").get<uint64_t>(); 
  v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int32_t>(); 
  v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>(); 
  v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
  v.freshBlood = j.at("freshBlood").get<bool>(); 
  v.jwt = j.at("jwt").get<std::string>(); 
  v.hotStreak = j.at("hotStreak").get<bool>(); 
  v.losses = j.at("losses").get<uint64_t>(); 
  v.displayDecayWarning = j.at("displayDecayWarning").get<bool>(); 
  v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
  v.demotionWarning = j.at("demotionWarning").get<uint64_t>(); 
  v.rank = j.at("rank").get<LeaguesLcdsLeagueRank>(); 
  v.veteran = j.at("veteran").get<bool>(); 
  v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesMiniseries.hpp>
#include <lol/def/LolLeaguesLeagueEmblem.hpp>
namespace lol {
  struct LolLeaguesLeagueNotificationItem { 
    uint64_t lastPlayed;
    std::string leagueName;
    int64_t minGamesForSeeding;
    uint64_t miniseriesTimeLeftToPlayMillis;
    std::string rank;
    uint64_t wins;
    int64_t points;
    uint64_t timeUntilInactivityStatusChanges;
    int64_t timeUntilDecay;
    std::string playerOrTeamName;
    uint64_t miniseriesWins;
    uint64_t losses;
    uint64_t totalPlayed;
    uint64_t seasonEndApexPosition;
    std::string inactivityStatus;
    bool inactive;
    std::string tier;
    std::string queueType;
    uint64_t previousPosition;
    std::vector<LolLeaguesLeagueEmblem> emblems;
    std::string seasonEndRank;
    std::string seasonEndTier;
    int64_t leaguePointsDelta;
    uint64_t timeLastDecayMessageShown;
    bool displayDecayWarning;
    std::string playerOrTeamId;
    uint64_t gameId;
    int64_t demotionWarning;
    std::vector<LolLeaguesMiniseries> miniseriesResults;
    std::string notifyReason; 
  };
  void to_json(json& j, const LolLeaguesLeagueNotificationItem& v) {
  j["lastPlayed"] = v.lastPlayed; 
  j["leagueName"] = v.leagueName; 
  j["minGamesForSeeding"] = v.minGamesForSeeding; 
  j["miniseriesTimeLeftToPlayMillis"] = v.miniseriesTimeLeftToPlayMillis; 
  j["rank"] = v.rank; 
  j["wins"] = v.wins; 
  j["points"] = v.points; 
  j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges; 
  j["timeUntilDecay"] = v.timeUntilDecay; 
  j["playerOrTeamName"] = v.playerOrTeamName; 
  j["miniseriesWins"] = v.miniseriesWins; 
  j["losses"] = v.losses; 
  j["totalPlayed"] = v.totalPlayed; 
  j["seasonEndApexPosition"] = v.seasonEndApexPosition; 
  j["inactivityStatus"] = v.inactivityStatus; 
  j["inactive"] = v.inactive; 
  j["tier"] = v.tier; 
  j["queueType"] = v.queueType; 
  j["previousPosition"] = v.previousPosition; 
  j["emblems"] = v.emblems; 
  j["seasonEndRank"] = v.seasonEndRank; 
  j["seasonEndTier"] = v.seasonEndTier; 
  j["leaguePointsDelta"] = v.leaguePointsDelta; 
  j["timeLastDecayMessageShown"] = v.timeLastDecayMessageShown; 
  j["displayDecayWarning"] = v.displayDecayWarning; 
  j["playerOrTeamId"] = v.playerOrTeamId; 
  j["gameId"] = v.gameId; 
  j["demotionWarning"] = v.demotionWarning; 
  j["miniseriesResults"] = v.miniseriesResults; 
  j["notifyReason"] = v.notifyReason; 
  }
  void from_json(const json& j, LolLeaguesLeagueNotificationItem& v) {
  v.lastPlayed = j.at("lastPlayed").get<uint64_t>(); 
  v.leagueName = j.at("leagueName").get<std::string>(); 
  v.minGamesForSeeding = j.at("minGamesForSeeding").get<int64_t>(); 
  v.miniseriesTimeLeftToPlayMillis = j.at("miniseriesTimeLeftToPlayMillis").get<uint64_t>(); 
  v.rank = j.at("rank").get<std::string>(); 
  v.wins = j.at("wins").get<uint64_t>(); 
  v.points = j.at("points").get<int64_t>(); 
  v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>(); 
  v.timeUntilDecay = j.at("timeUntilDecay").get<int64_t>(); 
  v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
  v.miniseriesWins = j.at("miniseriesWins").get<uint64_t>(); 
  v.losses = j.at("losses").get<uint64_t>(); 
  v.totalPlayed = j.at("totalPlayed").get<uint64_t>(); 
  v.seasonEndApexPosition = j.at("seasonEndApexPosition").get<uint64_t>(); 
  v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
  v.inactive = j.at("inactive").get<bool>(); 
  v.tier = j.at("tier").get<std::string>(); 
  v.queueType = j.at("queueType").get<std::string>(); 
  v.previousPosition = j.at("previousPosition").get<uint64_t>(); 
  v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem>>(); 
  v.seasonEndRank = j.at("seasonEndRank").get<std::string>(); 
  v.seasonEndTier = j.at("seasonEndTier").get<std::string>(); 
  v.leaguePointsDelta = j.at("leaguePointsDelta").get<int64_t>(); 
  v.timeLastDecayMessageShown = j.at("timeLastDecayMessageShown").get<uint64_t>(); 
  v.displayDecayWarning = j.at("displayDecayWarning").get<bool>(); 
  v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.demotionWarning = j.at("demotionWarning").get<int64_t>(); 
  v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries>>(); 
  v.notifyReason = j.at("notifyReason").get<std::string>(); 
  }
}
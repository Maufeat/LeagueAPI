#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace lol {
  struct LolLeaguesLeagueNotificationItem { 
    std::string inactivityStatus;
    uint64_t totalPlayed;
    std::string tier;
    std::string seasonEndTier;
    uint64_t timeUntilInactivityStatusChanges;
    uint64_t wins;
    std::vector<LolLeaguesLeagueEmblem> emblems;
    std::string leagueName;
    int64_t demotionWarning;
    std::string seasonEndRank;
    std::string rank;
    bool inactive;
    uint64_t losses;
    std::string notifyReason;
    uint64_t lastPlayed;
    std::string queueType;
    int64_t leaguePointsDelta;
    uint64_t miniseriesTimeLeftToPlayMillis;
    uint64_t seasonEndApexPosition;
    bool displayDecayWarning;
    int64_t minGamesForSeeding;
    uint64_t miniseriesWins;
    uint64_t timeLastDecayMessageShown;
    std::string playerOrTeamId;
    uint64_t previousPosition;
    std::vector<LolLeaguesMiniseries> miniseriesResults;
    uint64_t gameId;
    int64_t timeUntilDecay;
    int64_t points;
    std::string playerOrTeamName; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueNotificationItem& v) {
    j["inactivityStatus"] = v.inactivityStatus; 
    j["totalPlayed"] = v.totalPlayed; 
    j["tier"] = v.tier; 
    j["seasonEndTier"] = v.seasonEndTier; 
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges; 
    j["wins"] = v.wins; 
    j["emblems"] = v.emblems; 
    j["leagueName"] = v.leagueName; 
    j["demotionWarning"] = v.demotionWarning; 
    j["seasonEndRank"] = v.seasonEndRank; 
    j["rank"] = v.rank; 
    j["inactive"] = v.inactive; 
    j["losses"] = v.losses; 
    j["notifyReason"] = v.notifyReason; 
    j["lastPlayed"] = v.lastPlayed; 
    j["queueType"] = v.queueType; 
    j["leaguePointsDelta"] = v.leaguePointsDelta; 
    j["miniseriesTimeLeftToPlayMillis"] = v.miniseriesTimeLeftToPlayMillis; 
    j["seasonEndApexPosition"] = v.seasonEndApexPosition; 
    j["displayDecayWarning"] = v.displayDecayWarning; 
    j["minGamesForSeeding"] = v.minGamesForSeeding; 
    j["miniseriesWins"] = v.miniseriesWins; 
    j["timeLastDecayMessageShown"] = v.timeLastDecayMessageShown; 
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["previousPosition"] = v.previousPosition; 
    j["miniseriesResults"] = v.miniseriesResults; 
    j["gameId"] = v.gameId; 
    j["timeUntilDecay"] = v.timeUntilDecay; 
    j["points"] = v.points; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueNotificationItem& v) {
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
    v.totalPlayed = j.at("totalPlayed").get<uint64_t>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.seasonEndTier = j.at("seasonEndTier").get<std::string>(); 
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem>>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.demotionWarning = j.at("demotionWarning").get<int64_t>(); 
    v.seasonEndRank = j.at("seasonEndRank").get<std::string>(); 
    v.rank = j.at("rank").get<std::string>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.notifyReason = j.at("notifyReason").get<std::string>(); 
    v.lastPlayed = j.at("lastPlayed").get<uint64_t>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
    v.leaguePointsDelta = j.at("leaguePointsDelta").get<int64_t>(); 
    v.miniseriesTimeLeftToPlayMillis = j.at("miniseriesTimeLeftToPlayMillis").get<uint64_t>(); 
    v.seasonEndApexPosition = j.at("seasonEndApexPosition").get<uint64_t>(); 
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>(); 
    v.minGamesForSeeding = j.at("minGamesForSeeding").get<int64_t>(); 
    v.miniseriesWins = j.at("miniseriesWins").get<uint64_t>(); 
    v.timeLastDecayMessageShown = j.at("timeLastDecayMessageShown").get<uint64_t>(); 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.previousPosition = j.at("previousPosition").get<uint64_t>(); 
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.timeUntilDecay = j.at("timeUntilDecay").get<int64_t>(); 
    v.points = j.at("points").get<int64_t>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
  }
}
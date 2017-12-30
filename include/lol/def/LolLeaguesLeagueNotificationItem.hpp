#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace lol {
  struct LolLeaguesLeagueNotificationItem { 
    std::string seasonEndRank;
    std::string inactivityStatus;
    int64_t demotionWarning;
    std::vector<LolLeaguesLeagueEmblem> emblems;
    std::string tier;
    std::string rank;
    uint64_t timeLastDecayMessageShown;
    std::string notifyReason;
    std::vector<LolLeaguesMiniseries> miniseriesResults;
    std::string queueType;
    int64_t leaguePointsDelta;
    uint64_t seasonEndApexPosition;
    uint64_t timeUntilInactivityStatusChanges;
    bool inactive;
    int64_t timeUntilDecay;
    bool displayDecayWarning;
    std::string playerOrTeamId;
    uint64_t losses;
    std::string leagueName;
    uint64_t totalPlayed;
    uint64_t miniseriesWins;
    int64_t minGamesForSeeding;
    uint64_t lastPlayed;
    uint64_t miniseriesTimeLeftToPlayMillis;
    std::string seasonEndTier;
    int64_t points;
    uint64_t gameId;
    uint64_t previousPosition;
    uint64_t wins;
    std::string playerOrTeamName; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueNotificationItem& v) {
    j["seasonEndRank"] = v.seasonEndRank; 
    j["inactivityStatus"] = v.inactivityStatus; 
    j["demotionWarning"] = v.demotionWarning; 
    j["emblems"] = v.emblems; 
    j["tier"] = v.tier; 
    j["rank"] = v.rank; 
    j["timeLastDecayMessageShown"] = v.timeLastDecayMessageShown; 
    j["notifyReason"] = v.notifyReason; 
    j["miniseriesResults"] = v.miniseriesResults; 
    j["queueType"] = v.queueType; 
    j["leaguePointsDelta"] = v.leaguePointsDelta; 
    j["seasonEndApexPosition"] = v.seasonEndApexPosition; 
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges; 
    j["inactive"] = v.inactive; 
    j["timeUntilDecay"] = v.timeUntilDecay; 
    j["displayDecayWarning"] = v.displayDecayWarning; 
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["losses"] = v.losses; 
    j["leagueName"] = v.leagueName; 
    j["totalPlayed"] = v.totalPlayed; 
    j["miniseriesWins"] = v.miniseriesWins; 
    j["minGamesForSeeding"] = v.minGamesForSeeding; 
    j["lastPlayed"] = v.lastPlayed; 
    j["miniseriesTimeLeftToPlayMillis"] = v.miniseriesTimeLeftToPlayMillis; 
    j["seasonEndTier"] = v.seasonEndTier; 
    j["points"] = v.points; 
    j["gameId"] = v.gameId; 
    j["previousPosition"] = v.previousPosition; 
    j["wins"] = v.wins; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueNotificationItem& v) {
    v.seasonEndRank = j.at("seasonEndRank").get<std::string>(); 
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
    v.demotionWarning = j.at("demotionWarning").get<int64_t>(); 
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem>>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.rank = j.at("rank").get<std::string>(); 
    v.timeLastDecayMessageShown = j.at("timeLastDecayMessageShown").get<uint64_t>(); 
    v.notifyReason = j.at("notifyReason").get<std::string>(); 
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries>>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
    v.leaguePointsDelta = j.at("leaguePointsDelta").get<int64_t>(); 
    v.seasonEndApexPosition = j.at("seasonEndApexPosition").get<uint64_t>(); 
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.timeUntilDecay = j.at("timeUntilDecay").get<int64_t>(); 
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>(); 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.totalPlayed = j.at("totalPlayed").get<uint64_t>(); 
    v.miniseriesWins = j.at("miniseriesWins").get<uint64_t>(); 
    v.minGamesForSeeding = j.at("minGamesForSeeding").get<int64_t>(); 
    v.lastPlayed = j.at("lastPlayed").get<uint64_t>(); 
    v.miniseriesTimeLeftToPlayMillis = j.at("miniseriesTimeLeftToPlayMillis").get<uint64_t>(); 
    v.seasonEndTier = j.at("seasonEndTier").get<std::string>(); 
    v.points = j.at("points").get<int64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.previousPosition = j.at("previousPosition").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
  }
}
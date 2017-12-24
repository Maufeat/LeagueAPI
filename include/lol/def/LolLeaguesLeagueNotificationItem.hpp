#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesLeagueEmblem.hpp"
#include "LolLeaguesMiniseries.hpp"
namespace lol {
  struct LolLeaguesLeagueNotificationItem { 
    uint64_t totalPlayed;
    bool displayDecayWarning;
    uint64_t miniseriesWins;
    std::string queueType;
    uint64_t seasonEndApexPosition;
    bool inactive;
    int64_t demotionWarning;
    std::string seasonEndTier;
    uint64_t timeLastDecayMessageShown;
    std::string playerOrTeamName;
    uint64_t previousPosition;
    int64_t leaguePointsDelta;
    uint64_t timeUntilInactivityStatusChanges;
    std::vector<LolLeaguesLeagueEmblem> emblems;
    std::string leagueName;
    uint64_t gameId;
    std::string rank;
    std::string playerOrTeamId;
    int64_t minGamesForSeeding;
    std::string notifyReason;
    uint64_t miniseriesTimeLeftToPlayMillis;
    std::string seasonEndRank;
    int64_t timeUntilDecay;
    std::string inactivityStatus;
    int64_t points;
    uint64_t lastPlayed;
    std::vector<LolLeaguesMiniseries> miniseriesResults;
    std::string tier;
    uint64_t wins;
    uint64_t losses; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueNotificationItem& v) {
    j["totalPlayed"] = v.totalPlayed; 
    j["displayDecayWarning"] = v.displayDecayWarning; 
    j["miniseriesWins"] = v.miniseriesWins; 
    j["queueType"] = v.queueType; 
    j["seasonEndApexPosition"] = v.seasonEndApexPosition; 
    j["inactive"] = v.inactive; 
    j["demotionWarning"] = v.demotionWarning; 
    j["seasonEndTier"] = v.seasonEndTier; 
    j["timeLastDecayMessageShown"] = v.timeLastDecayMessageShown; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
    j["previousPosition"] = v.previousPosition; 
    j["leaguePointsDelta"] = v.leaguePointsDelta; 
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges; 
    j["emblems"] = v.emblems; 
    j["leagueName"] = v.leagueName; 
    j["gameId"] = v.gameId; 
    j["rank"] = v.rank; 
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["minGamesForSeeding"] = v.minGamesForSeeding; 
    j["notifyReason"] = v.notifyReason; 
    j["miniseriesTimeLeftToPlayMillis"] = v.miniseriesTimeLeftToPlayMillis; 
    j["seasonEndRank"] = v.seasonEndRank; 
    j["timeUntilDecay"] = v.timeUntilDecay; 
    j["inactivityStatus"] = v.inactivityStatus; 
    j["points"] = v.points; 
    j["lastPlayed"] = v.lastPlayed; 
    j["miniseriesResults"] = v.miniseriesResults; 
    j["tier"] = v.tier; 
    j["wins"] = v.wins; 
    j["losses"] = v.losses; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueNotificationItem& v) {
    v.totalPlayed = j.at("totalPlayed").get<uint64_t>(); 
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>(); 
    v.miniseriesWins = j.at("miniseriesWins").get<uint64_t>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
    v.seasonEndApexPosition = j.at("seasonEndApexPosition").get<uint64_t>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.demotionWarning = j.at("demotionWarning").get<int64_t>(); 
    v.seasonEndTier = j.at("seasonEndTier").get<std::string>(); 
    v.timeLastDecayMessageShown = j.at("timeLastDecayMessageShown").get<uint64_t>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.previousPosition = j.at("previousPosition").get<uint64_t>(); 
    v.leaguePointsDelta = j.at("leaguePointsDelta").get<int64_t>(); 
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>(); 
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem>>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.rank = j.at("rank").get<std::string>(); 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.minGamesForSeeding = j.at("minGamesForSeeding").get<int64_t>(); 
    v.notifyReason = j.at("notifyReason").get<std::string>(); 
    v.miniseriesTimeLeftToPlayMillis = j.at("miniseriesTimeLeftToPlayMillis").get<uint64_t>(); 
    v.seasonEndRank = j.at("seasonEndRank").get<std::string>(); 
    v.timeUntilDecay = j.at("timeUntilDecay").get<int64_t>(); 
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
    v.points = j.at("points").get<int64_t>(); 
    v.lastPlayed = j.at("lastPlayed").get<uint64_t>(); 
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries>>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
  }
}
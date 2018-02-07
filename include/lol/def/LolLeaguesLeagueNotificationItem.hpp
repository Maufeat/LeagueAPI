#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace lol {
  struct LolLeaguesLeagueNotificationItem { 
    std::string notifyReason;
    int64_t leaguePointsDelta;
    uint64_t gameId;
    int64_t minGamesForSeeding;
    std::string playerOrTeamId;
    std::string playerOrTeamName;
    std::string leagueName;
    std::string queueType;
    std::string tier;
    std::string rank;
    int64_t points;
    uint64_t previousPosition;
    uint64_t wins;
    uint64_t losses;
    uint64_t lastPlayed;
    int64_t timeUntilDecay;
    std::string inactivityStatus;
    uint64_t timeUntilInactivityStatusChanges;
    uint64_t timeLastDecayMessageShown;
    std::vector<LolLeaguesMiniseries> miniseriesResults;
    bool displayDecayWarning;
    int64_t demotionWarning;
    std::string seasonEndTier;
    std::string seasonEndRank;
    uint64_t seasonEndApexPosition;
    std::vector<LolLeaguesLeagueEmblem> emblems;
    bool inactive;
    uint64_t totalPlayed;
    uint64_t miniseriesWins;
    uint64_t miniseriesTimeLeftToPlayMillis; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueNotificationItem& v) {
    j["notifyReason"] = v.notifyReason; 
    j["leaguePointsDelta"] = v.leaguePointsDelta; 
    j["gameId"] = v.gameId; 
    j["minGamesForSeeding"] = v.minGamesForSeeding; 
    j["playerOrTeamId"] = v.playerOrTeamId; 
    j["playerOrTeamName"] = v.playerOrTeamName; 
    j["leagueName"] = v.leagueName; 
    j["queueType"] = v.queueType; 
    j["tier"] = v.tier; 
    j["rank"] = v.rank; 
    j["points"] = v.points; 
    j["previousPosition"] = v.previousPosition; 
    j["wins"] = v.wins; 
    j["losses"] = v.losses; 
    j["lastPlayed"] = v.lastPlayed; 
    j["timeUntilDecay"] = v.timeUntilDecay; 
    j["inactivityStatus"] = v.inactivityStatus; 
    j["timeUntilInactivityStatusChanges"] = v.timeUntilInactivityStatusChanges; 
    j["timeLastDecayMessageShown"] = v.timeLastDecayMessageShown; 
    j["miniseriesResults"] = v.miniseriesResults; 
    j["displayDecayWarning"] = v.displayDecayWarning; 
    j["demotionWarning"] = v.demotionWarning; 
    j["seasonEndTier"] = v.seasonEndTier; 
    j["seasonEndRank"] = v.seasonEndRank; 
    j["seasonEndApexPosition"] = v.seasonEndApexPosition; 
    j["emblems"] = v.emblems; 
    j["inactive"] = v.inactive; 
    j["totalPlayed"] = v.totalPlayed; 
    j["miniseriesWins"] = v.miniseriesWins; 
    j["miniseriesTimeLeftToPlayMillis"] = v.miniseriesTimeLeftToPlayMillis; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueNotificationItem& v) {
    v.notifyReason = j.at("notifyReason").get<std::string>(); 
    v.leaguePointsDelta = j.at("leaguePointsDelta").get<int64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.minGamesForSeeding = j.at("minGamesForSeeding").get<int64_t>(); 
    v.playerOrTeamId = j.at("playerOrTeamId").get<std::string>(); 
    v.playerOrTeamName = j.at("playerOrTeamName").get<std::string>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
    v.tier = j.at("tier").get<std::string>(); 
    v.rank = j.at("rank").get<std::string>(); 
    v.points = j.at("points").get<int64_t>(); 
    v.previousPosition = j.at("previousPosition").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.losses = j.at("losses").get<uint64_t>(); 
    v.lastPlayed = j.at("lastPlayed").get<uint64_t>(); 
    v.timeUntilDecay = j.at("timeUntilDecay").get<int64_t>(); 
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>(); 
    v.timeUntilInactivityStatusChanges = j.at("timeUntilInactivityStatusChanges").get<uint64_t>(); 
    v.timeLastDecayMessageShown = j.at("timeLastDecayMessageShown").get<uint64_t>(); 
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries>>(); 
    v.displayDecayWarning = j.at("displayDecayWarning").get<bool>(); 
    v.demotionWarning = j.at("demotionWarning").get<int64_t>(); 
    v.seasonEndTier = j.at("seasonEndTier").get<std::string>(); 
    v.seasonEndRank = j.at("seasonEndRank").get<std::string>(); 
    v.seasonEndApexPosition = j.at("seasonEndApexPosition").get<uint64_t>(); 
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem>>(); 
    v.inactive = j.at("inactive").get<bool>(); 
    v.totalPlayed = j.at("totalPlayed").get<uint64_t>(); 
    v.miniseriesWins = j.at("miniseriesWins").get<uint64_t>(); 
    v.miniseriesTimeLeftToPlayMillis = j.at("miniseriesTimeLeftToPlayMillis").get<uint64_t>(); 
  }
}
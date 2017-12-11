#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPftPFTEndOfGameTeam.hpp>
#include <leagueapi/definitions/LolPftPFTEndOfGamePoints.hpp>

namespace leagueapi {
  struct LolPftPFTEndOfGameStats { /**/ 
    int32_t rpEarned;/**/
    int32_t ipTotal;/**/
    std::vector<int32_t> newSpells;/**/
    int32_t eloChange;/**/
    int32_t loyaltyBoostIpEarned;/**/
    uint64_t userId;/**/
    int32_t gameLength;/**/
    uint64_t summonerId;/**/
    int32_t elo;/**/
    std::string summonerName;/**/
    bool sendStatsToTournamentProvider;/**/
    bool ranked;/**/
    int32_t coOpVsAiMinutesLeftToday;/**/
    int32_t customMinutesLeftToday;/**/
    uint64_t previousXpTotal;/**/
    std::string myTeamStatus;/**/
    bool gameEndedInEarlySurrender;/**/
    int32_t boostIpEarned;/**/
    std::string queueType;/**/
    std::vector<LolPftPFTEndOfGameTeam> teams;/**/
    std::vector<std::string> gameMutators;/**/
    int32_t championId;/**/
    int32_t boostXpEarned;/**/
    int32_t completionBonusPoints;/**/
    uint64_t previousLevel;/**/
    bool earlySurrenderAccomplice;/**/
    int32_t skinIndex;/**/
    int32_t battleBoostIpEarned;/**/
    uint64_t reportGameId;/**/
    int32_t odinBonusIp;/**/
    std::string gameType;/**/
    int32_t queueBonusEarned;/**/
    int32_t skinId;/**/
    bool isAramGame;/**/
    int32_t coOpVsAiMsecsUntilReset;/**/
    int32_t experienceEarned;/**/
    uint64_t accountId;/**/
    std::string roomName;/**/
    LolPftPFTEndOfGamePoints rerollData;/**/
    bool causedEarlySurrender;/**/
    bool leveledUp;/**/
    int32_t firstWinBonus;/**/
    bool teamEarlySurrendered;/**/
    int32_t talentPointsGained;/**/
    bool imbalancedTeamsNoPoints;/**/
    json pointsPenalties;/**/
    std::string difficulty;/**/
    int32_t customMsecsUntilReset;/**/
    int32_t experienceTotal;/**/
    std::string roomPassword;/**/
    int32_t ipEarned;/**/
    int32_t timeUntilNextFirstWinBonus;/**/
    uint64_t gameId;/**/
    std::string gameMode;/**/
    bool invalid;/**/
    int32_t loyaltyBoostXpEarned;/**/
    int32_t basePoints;/**/
    int32_t partyRewardsBonusIpEarned;/**/
  };
  static void to_json(json& j, const LolPftPFTEndOfGameStats& v) { 
    j["rpEarned"] = v.rpEarned;
    j["ipTotal"] = v.ipTotal;
    j["newSpells"] = v.newSpells;
    j["eloChange"] = v.eloChange;
    j["loyaltyBoostIpEarned"] = v.loyaltyBoostIpEarned;
    j["userId"] = v.userId;
    j["gameLength"] = v.gameLength;
    j["summonerId"] = v.summonerId;
    j["elo"] = v.elo;
    j["summonerName"] = v.summonerName;
    j["sendStatsToTournamentProvider"] = v.sendStatsToTournamentProvider;
    j["ranked"] = v.ranked;
    j["coOpVsAiMinutesLeftToday"] = v.coOpVsAiMinutesLeftToday;
    j["customMinutesLeftToday"] = v.customMinutesLeftToday;
    j["previousXpTotal"] = v.previousXpTotal;
    j["myTeamStatus"] = v.myTeamStatus;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["boostIpEarned"] = v.boostIpEarned;
    j["queueType"] = v.queueType;
    j["teams"] = v.teams;
    j["gameMutators"] = v.gameMutators;
    j["championId"] = v.championId;
    j["boostXpEarned"] = v.boostXpEarned;
    j["completionBonusPoints"] = v.completionBonusPoints;
    j["previousLevel"] = v.previousLevel;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["skinIndex"] = v.skinIndex;
    j["battleBoostIpEarned"] = v.battleBoostIpEarned;
    j["reportGameId"] = v.reportGameId;
    j["odinBonusIp"] = v.odinBonusIp;
    j["gameType"] = v.gameType;
    j["queueBonusEarned"] = v.queueBonusEarned;
    j["skinId"] = v.skinId;
    j["isAramGame"] = v.isAramGame;
    j["coOpVsAiMsecsUntilReset"] = v.coOpVsAiMsecsUntilReset;
    j["experienceEarned"] = v.experienceEarned;
    j["accountId"] = v.accountId;
    j["roomName"] = v.roomName;
    j["rerollData"] = v.rerollData;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["leveledUp"] = v.leveledUp;
    j["firstWinBonus"] = v.firstWinBonus;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["talentPointsGained"] = v.talentPointsGained;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["pointsPenalties"] = v.pointsPenalties;
    j["difficulty"] = v.difficulty;
    j["customMsecsUntilReset"] = v.customMsecsUntilReset;
    j["experienceTotal"] = v.experienceTotal;
    j["roomPassword"] = v.roomPassword;
    j["ipEarned"] = v.ipEarned;
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
    j["gameId"] = v.gameId;
    j["gameMode"] = v.gameMode;
    j["invalid"] = v.invalid;
    j["loyaltyBoostXpEarned"] = v.loyaltyBoostXpEarned;
    j["basePoints"] = v.basePoints;
    j["partyRewardsBonusIpEarned"] = v.partyRewardsBonusIpEarned;
  }
  static void from_json(const json& j, LolPftPFTEndOfGameStats& v) { 
    v.rpEarned = j.at("rpEarned").get<int32_t>(); 
    v.ipTotal = j.at("ipTotal").get<int32_t>(); 
    v.newSpells = j.at("newSpells").get<std::vector<int32_t>>(); 
    v.eloChange = j.at("eloChange").get<int32_t>(); 
    v.loyaltyBoostIpEarned = j.at("loyaltyBoostIpEarned").get<int32_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.gameLength = j.at("gameLength").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.elo = j.at("elo").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.sendStatsToTournamentProvider = j.at("sendStatsToTournamentProvider").get<bool>(); 
    v.ranked = j.at("ranked").get<bool>(); 
    v.coOpVsAiMinutesLeftToday = j.at("coOpVsAiMinutesLeftToday").get<int32_t>(); 
    v.customMinutesLeftToday = j.at("customMinutesLeftToday").get<int32_t>(); 
    v.previousXpTotal = j.at("previousXpTotal").get<uint64_t>(); 
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>(); 
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>(); 
    v.boostIpEarned = j.at("boostIpEarned").get<int32_t>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
    v.teams = j.at("teams").get<std::vector<LolPftPFTEndOfGameTeam>>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.boostXpEarned = j.at("boostXpEarned").get<int32_t>(); 
    v.completionBonusPoints = j.at("completionBonusPoints").get<int32_t>(); 
    v.previousLevel = j.at("previousLevel").get<uint64_t>(); 
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.battleBoostIpEarned = j.at("battleBoostIpEarned").get<int32_t>(); 
    v.reportGameId = j.at("reportGameId").get<uint64_t>(); 
    v.odinBonusIp = j.at("odinBonusIp").get<int32_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.queueBonusEarned = j.at("queueBonusEarned").get<int32_t>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.isAramGame = j.at("isAramGame").get<bool>(); 
    v.coOpVsAiMsecsUntilReset = j.at("coOpVsAiMsecsUntilReset").get<int32_t>(); 
    v.experienceEarned = j.at("experienceEarned").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.roomName = j.at("roomName").get<std::string>(); 
    v.rerollData = j.at("rerollData").get<LolPftPFTEndOfGamePoints>(); 
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>(); 
    v.leveledUp = j.at("leveledUp").get<bool>(); 
    v.firstWinBonus = j.at("firstWinBonus").get<int32_t>(); 
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>(); 
    v.talentPointsGained = j.at("talentPointsGained").get<int32_t>(); 
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>(); 
    v.pointsPenalties = j.at("pointsPenalties").get<json>(); 
    v.difficulty = j.at("difficulty").get<std::string>(); 
    v.customMsecsUntilReset = j.at("customMsecsUntilReset").get<int32_t>(); 
    v.experienceTotal = j.at("experienceTotal").get<int32_t>(); 
    v.roomPassword = j.at("roomPassword").get<std::string>(); 
    v.ipEarned = j.at("ipEarned").get<int32_t>(); 
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<int32_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.invalid = j.at("invalid").get<bool>(); 
    v.loyaltyBoostXpEarned = j.at("loyaltyBoostXpEarned").get<int32_t>(); 
    v.basePoints = j.at("basePoints").get<int32_t>(); 
    v.partyRewardsBonusIpEarned = j.at("partyRewardsBonusIpEarned").get<int32_t>(); 
  }
} 
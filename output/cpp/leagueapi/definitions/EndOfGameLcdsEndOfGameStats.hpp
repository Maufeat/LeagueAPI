#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/EndOfGameLcdsPointsPenalty.hpp>
#include <leagueapi/definitions/EndOfGameLcdsPlayerParticipantStatsSummary.hpp>
#include <leagueapi/definitions/EndOfGameLcdsTeamInfo.hpp>
#include <leagueapi/definitions/EndOfGameLcdsSpell.hpp>

namespace leagueapi {
  struct EndOfGameLcdsEndOfGameStats { /**/ 
    int32_t rpEarned;/**/
    int32_t ipTotal;/**/
    std::vector<EndOfGameLcdsSpell> newSpells;/**/
    int32_t eloChange;/**/
    int32_t loyaltyBoostIpEarned;/**/
    uint64_t userId;/**/
    uint32_t gameLength;/**/
    int32_t elo;/**/
    bool ranked;/**/
    bool sendStatsToTournamentProvider;/**/
    std::string summonerName;/**/
    int32_t coOpVsAiMinutesLeftToday;/**/
    int32_t customMinutesLeftToday;/**/
    uint64_t previousXpTotal;/**/
    std::string myTeamStatus;/**/
    bool gameEndedInEarlySurrender;/**/
    int32_t boostIpEarned;/**/
    std::string queueType;/**/
    std::vector<std::string> gameMutators;/**/
    int32_t boostXpEarned;/**/
    int32_t completionBonusPoints;/**/
    uint64_t previousLevel;/**/
    bool earlySurrenderAccomplice;/**/
    bool leveledUp;/**/
    int32_t battleBoostIpEarned;/**/
    uint64_t reportGameId;/**/
    int32_t odinBonusIp;/**/
    EndOfGameLcdsTeamInfo myTeamInfo;/**/
    std::string gameType;/**/
    int32_t queueBonusEarned;/**/
    int32_t skinId;/**/
    int32_t coOpVsAiMsecsUntilReset;/**/
    int32_t experienceEarned;/**/
    EndOfGameLcdsTeamInfo otherTeamInfo;/**/
    std::string roomName;/**/
    bool causedEarlySurrender;/**/
    int32_t timeUntilNextFirstWinBonus;/**/
    int32_t skinIndex;/**/
    int32_t firstWinBonus;/**/
    bool teamEarlySurrendered;/**/
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary> otherTeamPlayerParticipantStats;/**/
    int32_t talentPointsGained;/**/
    bool imbalancedTeamsNoPoints;/**/
    std::vector<EndOfGameLcdsPointsPenalty> pointsPenalties;/**/
    std::string difficulty;/**/
    int32_t customMsecsUntilReset;/**/
    int32_t experienceTotal;/**/
    std::string roomPassword;/**/
    int32_t ipEarned;/**/
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary> teamPlayerParticipantStats;/**/
    uint64_t gameId;/**/
    std::string gameMode;/**/
    bool invalid;/**/
    int32_t loyaltyBoostXpEarned;/**/
    int32_t basePoints;/**/
    int32_t partyRewardsBonusIpEarned;/**/
  };
  static void to_json(json& j, const EndOfGameLcdsEndOfGameStats& v) { 
    j["rpEarned"] = v.rpEarned;
    j["ipTotal"] = v.ipTotal;
    j["newSpells"] = v.newSpells;
    j["eloChange"] = v.eloChange;
    j["loyaltyBoostIpEarned"] = v.loyaltyBoostIpEarned;
    j["userId"] = v.userId;
    j["gameLength"] = v.gameLength;
    j["elo"] = v.elo;
    j["ranked"] = v.ranked;
    j["sendStatsToTournamentProvider"] = v.sendStatsToTournamentProvider;
    j["summonerName"] = v.summonerName;
    j["coOpVsAiMinutesLeftToday"] = v.coOpVsAiMinutesLeftToday;
    j["customMinutesLeftToday"] = v.customMinutesLeftToday;
    j["previousXpTotal"] = v.previousXpTotal;
    j["myTeamStatus"] = v.myTeamStatus;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["boostIpEarned"] = v.boostIpEarned;
    j["queueType"] = v.queueType;
    j["gameMutators"] = v.gameMutators;
    j["boostXpEarned"] = v.boostXpEarned;
    j["completionBonusPoints"] = v.completionBonusPoints;
    j["previousLevel"] = v.previousLevel;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["leveledUp"] = v.leveledUp;
    j["battleBoostIpEarned"] = v.battleBoostIpEarned;
    j["reportGameId"] = v.reportGameId;
    j["odinBonusIp"] = v.odinBonusIp;
    j["myTeamInfo"] = v.myTeamInfo;
    j["gameType"] = v.gameType;
    j["queueBonusEarned"] = v.queueBonusEarned;
    j["skinId"] = v.skinId;
    j["coOpVsAiMsecsUntilReset"] = v.coOpVsAiMsecsUntilReset;
    j["experienceEarned"] = v.experienceEarned;
    j["otherTeamInfo"] = v.otherTeamInfo;
    j["roomName"] = v.roomName;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
    j["skinIndex"] = v.skinIndex;
    j["firstWinBonus"] = v.firstWinBonus;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["otherTeamPlayerParticipantStats"] = v.otherTeamPlayerParticipantStats;
    j["talentPointsGained"] = v.talentPointsGained;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["pointsPenalties"] = v.pointsPenalties;
    j["difficulty"] = v.difficulty;
    j["customMsecsUntilReset"] = v.customMsecsUntilReset;
    j["experienceTotal"] = v.experienceTotal;
    j["roomPassword"] = v.roomPassword;
    j["ipEarned"] = v.ipEarned;
    j["teamPlayerParticipantStats"] = v.teamPlayerParticipantStats;
    j["gameId"] = v.gameId;
    j["gameMode"] = v.gameMode;
    j["invalid"] = v.invalid;
    j["loyaltyBoostXpEarned"] = v.loyaltyBoostXpEarned;
    j["basePoints"] = v.basePoints;
    j["partyRewardsBonusIpEarned"] = v.partyRewardsBonusIpEarned;
  }
  static void from_json(const json& j, EndOfGameLcdsEndOfGameStats& v) { 
    v.rpEarned = j.at("rpEarned").get<int32_t>(); 
    v.ipTotal = j.at("ipTotal").get<int32_t>(); 
    v.newSpells = j.at("newSpells").get<std::vector<EndOfGameLcdsSpell>>(); 
    v.eloChange = j.at("eloChange").get<int32_t>(); 
    v.loyaltyBoostIpEarned = j.at("loyaltyBoostIpEarned").get<int32_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.gameLength = j.at("gameLength").get<uint32_t>(); 
    v.elo = j.at("elo").get<int32_t>(); 
    v.ranked = j.at("ranked").get<bool>(); 
    v.sendStatsToTournamentProvider = j.at("sendStatsToTournamentProvider").get<bool>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.coOpVsAiMinutesLeftToday = j.at("coOpVsAiMinutesLeftToday").get<int32_t>(); 
    v.customMinutesLeftToday = j.at("customMinutesLeftToday").get<int32_t>(); 
    v.previousXpTotal = j.at("previousXpTotal").get<uint64_t>(); 
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>(); 
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>(); 
    v.boostIpEarned = j.at("boostIpEarned").get<int32_t>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.boostXpEarned = j.at("boostXpEarned").get<int32_t>(); 
    v.completionBonusPoints = j.at("completionBonusPoints").get<int32_t>(); 
    v.previousLevel = j.at("previousLevel").get<uint64_t>(); 
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>(); 
    v.leveledUp = j.at("leveledUp").get<bool>(); 
    v.battleBoostIpEarned = j.at("battleBoostIpEarned").get<int32_t>(); 
    v.reportGameId = j.at("reportGameId").get<uint64_t>(); 
    v.odinBonusIp = j.at("odinBonusIp").get<int32_t>(); 
    v.myTeamInfo = j.at("myTeamInfo").get<EndOfGameLcdsTeamInfo>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.queueBonusEarned = j.at("queueBonusEarned").get<int32_t>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.coOpVsAiMsecsUntilReset = j.at("coOpVsAiMsecsUntilReset").get<int32_t>(); 
    v.experienceEarned = j.at("experienceEarned").get<int32_t>(); 
    v.otherTeamInfo = j.at("otherTeamInfo").get<EndOfGameLcdsTeamInfo>(); 
    v.roomName = j.at("roomName").get<std::string>(); 
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>(); 
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<int32_t>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.firstWinBonus = j.at("firstWinBonus").get<int32_t>(); 
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>(); 
    v.otherTeamPlayerParticipantStats = j.at("otherTeamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary>>(); 
    v.talentPointsGained = j.at("talentPointsGained").get<int32_t>(); 
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>(); 
    v.pointsPenalties = j.at("pointsPenalties").get<std::vector<EndOfGameLcdsPointsPenalty>>(); 
    v.difficulty = j.at("difficulty").get<std::string>(); 
    v.customMsecsUntilReset = j.at("customMsecsUntilReset").get<int32_t>(); 
    v.experienceTotal = j.at("experienceTotal").get<int32_t>(); 
    v.roomPassword = j.at("roomPassword").get<std::string>(); 
    v.ipEarned = j.at("ipEarned").get<int32_t>(); 
    v.teamPlayerParticipantStats = j.at("teamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.invalid = j.at("invalid").get<bool>(); 
    v.loyaltyBoostXpEarned = j.at("loyaltyBoostXpEarned").get<int32_t>(); 
    v.basePoints = j.at("basePoints").get<int32_t>(); 
    v.partyRewardsBonusIpEarned = j.at("partyRewardsBonusIpEarned").get<int32_t>(); 
  }
} 
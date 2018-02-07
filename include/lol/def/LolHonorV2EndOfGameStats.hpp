#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2EndOfGameTeam.hpp"
namespace lol {
  struct LolHonorV2EndOfGameStats { 
    std::string difficulty;
    uint64_t gameId;
    int32_t gameLength;
    std::string gameMode;
    std::vector<std::string> gameMutators;
    std::string gameType;
    bool imbalancedTeamsNoPoints;
    bool invalid;
    std::string queueType;
    bool ranked;
    uint64_t reportGameId;
    std::vector<LolHonorV2EndOfGameTeam> teams;
    std::string myTeamStatus;
    std::string summonerName;
    uint64_t accountId;
    uint64_t summonerId;
    int32_t championId;
    bool gameEndedInEarlySurrender; 
  };
  inline void to_json(json& j, const LolHonorV2EndOfGameStats& v) {
    j["difficulty"] = v.difficulty; 
    j["gameId"] = v.gameId; 
    j["gameLength"] = v.gameLength; 
    j["gameMode"] = v.gameMode; 
    j["gameMutators"] = v.gameMutators; 
    j["gameType"] = v.gameType; 
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints; 
    j["invalid"] = v.invalid; 
    j["queueType"] = v.queueType; 
    j["ranked"] = v.ranked; 
    j["reportGameId"] = v.reportGameId; 
    j["teams"] = v.teams; 
    j["myTeamStatus"] = v.myTeamStatus; 
    j["summonerName"] = v.summonerName; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["championId"] = v.championId; 
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender; 
  }
  inline void from_json(const json& j, LolHonorV2EndOfGameStats& v) {
    v.difficulty = j.at("difficulty").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.gameLength = j.at("gameLength").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>(); 
    v.invalid = j.at("invalid").get<bool>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
    v.ranked = j.at("ranked").get<bool>(); 
    v.reportGameId = j.at("reportGameId").get<uint64_t>(); 
    v.teams = j.at("teams").get<std::vector<LolHonorV2EndOfGameTeam>>(); 
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>(); 
  }
}
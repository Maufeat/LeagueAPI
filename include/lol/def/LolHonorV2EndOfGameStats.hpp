#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2EndOfGameTeam.hpp"
namespace lol {
  struct LolHonorV2EndOfGameStats { 
    uint64_t summonerId;
    uint64_t gameId;
    bool ranked;
    uint64_t accountId;
    int32_t gameLength;
    std::string difficulty;
    std::string queueType;
    std::string gameType;
    bool gameEndedInEarlySurrender;
    bool invalid;
    std::string myTeamStatus;
    std::string gameMode;
    int32_t championId;
    bool imbalancedTeamsNoPoints;
    std::vector<LolHonorV2EndOfGameTeam> teams;
    std::string summonerName;
    std::vector<std::string> gameMutators;
    uint64_t reportGameId; 
  };
  inline void to_json(json& j, const LolHonorV2EndOfGameStats& v) {
    j["summonerId"] = v.summonerId; 
    j["gameId"] = v.gameId; 
    j["ranked"] = v.ranked; 
    j["accountId"] = v.accountId; 
    j["gameLength"] = v.gameLength; 
    j["difficulty"] = v.difficulty; 
    j["queueType"] = v.queueType; 
    j["gameType"] = v.gameType; 
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender; 
    j["invalid"] = v.invalid; 
    j["myTeamStatus"] = v.myTeamStatus; 
    j["gameMode"] = v.gameMode; 
    j["championId"] = v.championId; 
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints; 
    j["teams"] = v.teams; 
    j["summonerName"] = v.summonerName; 
    j["gameMutators"] = v.gameMutators; 
    j["reportGameId"] = v.reportGameId; 
  }
  inline void from_json(const json& j, LolHonorV2EndOfGameStats& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.ranked = j.at("ranked").get<bool>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.gameLength = j.at("gameLength").get<int32_t>(); 
    v.difficulty = j.at("difficulty").get<std::string>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>(); 
    v.invalid = j.at("invalid").get<bool>(); 
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>(); 
    v.teams = j.at("teams").get<std::vector<LolHonorV2EndOfGameTeam>>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.reportGameId = j.at("reportGameId").get<uint64_t>(); 
  }
}
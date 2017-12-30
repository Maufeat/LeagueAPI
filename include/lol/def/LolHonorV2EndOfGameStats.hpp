#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2EndOfGameTeam.hpp"
namespace lol {
  struct LolHonorV2EndOfGameStats { 
    std::string summonerName;
    std::string difficulty;
    bool ranked;
    std::vector<std::string> gameMutators;
    bool gameEndedInEarlySurrender;
    uint64_t accountId;
    std::vector<LolHonorV2EndOfGameTeam> teams;
    bool invalid;
    int32_t gameLength;
    uint64_t reportGameId;
    std::string gameType;
    std::string gameMode;
    std::string queueType;
    uint64_t gameId;
    std::string myTeamStatus;
    bool imbalancedTeamsNoPoints;
    int32_t championId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolHonorV2EndOfGameStats& v) {
    j["summonerName"] = v.summonerName; 
    j["difficulty"] = v.difficulty; 
    j["ranked"] = v.ranked; 
    j["gameMutators"] = v.gameMutators; 
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender; 
    j["accountId"] = v.accountId; 
    j["teams"] = v.teams; 
    j["invalid"] = v.invalid; 
    j["gameLength"] = v.gameLength; 
    j["reportGameId"] = v.reportGameId; 
    j["gameType"] = v.gameType; 
    j["gameMode"] = v.gameMode; 
    j["queueType"] = v.queueType; 
    j["gameId"] = v.gameId; 
    j["myTeamStatus"] = v.myTeamStatus; 
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints; 
    j["championId"] = v.championId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolHonorV2EndOfGameStats& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.difficulty = j.at("difficulty").get<std::string>(); 
    v.ranked = j.at("ranked").get<bool>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.teams = j.at("teams").get<std::vector<LolHonorV2EndOfGameTeam>>(); 
    v.invalid = j.at("invalid").get<bool>(); 
    v.gameLength = j.at("gameLength").get<int32_t>(); 
    v.reportGameId = j.at("reportGameId").get<uint64_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>(); 
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolHonorV2EndOfGameTeam.hpp>
namespace lol {
  struct LolHonorV2EndOfGameStats { 
    bool ranked;
    uint64_t summonerId;
    std::vector<LolHonorV2EndOfGameTeam> teams;
    bool imbalancedTeamsNoPoints;
    std::string gameMode;
    uint64_t accountId;
    std::string myTeamStatus;
    uint64_t reportGameId;
    bool gameEndedInEarlySurrender;
    std::string difficulty;
    std::vector<std::string> gameMutators;
    std::string summonerName;
    uint64_t gameId;
    int32_t championId;
    bool invalid;
    int32_t gameLength;
    std::string gameType;
    std::string queueType; 
  };
  void to_json(json& j, const LolHonorV2EndOfGameStats& v) {
  j["ranked"] = v.ranked; 
  j["summonerId"] = v.summonerId; 
  j["teams"] = v.teams; 
  j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints; 
  j["gameMode"] = v.gameMode; 
  j["accountId"] = v.accountId; 
  j["myTeamStatus"] = v.myTeamStatus; 
  j["reportGameId"] = v.reportGameId; 
  j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender; 
  j["difficulty"] = v.difficulty; 
  j["gameMutators"] = v.gameMutators; 
  j["summonerName"] = v.summonerName; 
  j["gameId"] = v.gameId; 
  j["championId"] = v.championId; 
  j["invalid"] = v.invalid; 
  j["gameLength"] = v.gameLength; 
  j["gameType"] = v.gameType; 
  j["queueType"] = v.queueType; 
  }
  void from_json(const json& j, LolHonorV2EndOfGameStats& v) {
  v.ranked = j.at("ranked").get<bool>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.teams = j.at("teams").get<std::vector<LolHonorV2EndOfGameTeam>>(); 
  v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>(); 
  v.gameMode = j.at("gameMode").get<std::string>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.myTeamStatus = j.at("myTeamStatus").get<std::string>(); 
  v.reportGameId = j.at("reportGameId").get<uint64_t>(); 
  v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>(); 
  v.difficulty = j.at("difficulty").get<std::string>(); 
  v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.invalid = j.at("invalid").get<bool>(); 
  v.gameLength = j.at("gameLength").get<int32_t>(); 
  v.gameType = j.at("gameType").get<std::string>(); 
  v.queueType = j.at("queueType").get<std::string>(); 
  }
}
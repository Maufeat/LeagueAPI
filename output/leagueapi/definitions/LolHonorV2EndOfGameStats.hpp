#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolHonorV2EndOfGameTeam.hpp>"

namespace leagueapi {
  struct LolHonorV2EndOfGameStats { /**/ 
    std::string gameType;/**/
    std::string summonerName;/**/
    bool imbalancedTeamsNoPoints;/**/
    std::string queueType;/**/
    std::string difficulty;/**/
    std::vector<std::string> gameMutators;/**/
    int32_t championId;/**/
    int32_t gameLength;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
    std::vector<LolHonorV2EndOfGameTeam> teams;/**/
    bool ranked;/**/
    uint64_t gameId;/**/
    bool gameEndedInEarlySurrender;/**/
    bool invalid;/**/
    uint64_t reportGameId;/**/
    std::string myTeamStatus;/**/
    std::string gameMode;/**/
  };
  static void to_json(json& j, const LolHonorV2EndOfGameStats& v) { 
    j["gameType"] = v.gameType;
    j["summonerName"] = v.summonerName;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["queueType"] = v.queueType;
    j["difficulty"] = v.difficulty;
    j["gameMutators"] = v.gameMutators;
    j["championId"] = v.championId;
    j["gameLength"] = v.gameLength;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
    j["teams"] = v.teams;
    j["ranked"] = v.ranked;
    j["gameId"] = v.gameId;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["invalid"] = v.invalid;
    j["reportGameId"] = v.reportGameId;
    j["myTeamStatus"] = v.myTeamStatus;
    j["gameMode"] = v.gameMode;
  }
  static void from_json(const json& j, LolHonorV2EndOfGameStats& v) { 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
    v.difficulty = j.at("difficulty").get<std::string>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.gameLength = j.at("gameLength").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.teams = j.at("teams").get<std::vector<LolHonorV2EndOfGameTeam>>(); 
    v.ranked = j.at("ranked").get<bool>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>(); 
    v.invalid = j.at("invalid").get<bool>(); 
    v.reportGameId = j.at("reportGameId").get<uint64_t>(); 
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
  }
} 
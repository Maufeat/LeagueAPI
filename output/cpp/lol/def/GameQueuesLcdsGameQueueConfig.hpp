#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/GameQueuesLcdsMatchingThrottleConfig.hpp>
namespace lol {
  struct GameQueuesLcdsGameQueueConfig { 
    bool teamOnly;
    bool ranked;
    std::string queueBonusKey;
    bool thresholdEnabled;
    std::string gameMode;
    int32_t gameTypeConfigId;
    uint32_t minimumQueueDodgeDelayTime;
    uint32_t maxLevel;
    std::string queueState;
    int32_t id;
    uint32_t blockedMinutesThreshold;
    std::string cacheName;
    std::vector<std::string> gameMutators;
    std::string queueStateString;
    uint32_t numPlayersPerTeam;
    std::vector<int32_t> supportedMapIds;
    std::string pointsConfigKey;
    uint32_t minimumParticipantListSize;
    std::string typeString;
    bool randomizeTeamSizes;
    bool botsCanSpawnOnBlueSide;
    GameQueuesLcdsMatchingThrottleConfig matchingThrottleConfig;
    bool disallowFreeChampions;
    uint64_t lastToggledOffTime;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    int64_t thresholdSize;
    std::string type;
    uint32_t maximumParticipantListSize;
    uint32_t minLevel;
    uint64_t lastToggledOnTime;
    std::string mapSelectionAlgorithm; 
  };
  void to_json(json& j, const GameQueuesLcdsGameQueueConfig& v) {
  j["teamOnly"] = v.teamOnly; 
  j["ranked"] = v.ranked; 
  j["queueBonusKey"] = v.queueBonusKey; 
  j["thresholdEnabled"] = v.thresholdEnabled; 
  j["gameMode"] = v.gameMode; 
  j["gameTypeConfigId"] = v.gameTypeConfigId; 
  j["minimumQueueDodgeDelayTime"] = v.minimumQueueDodgeDelayTime; 
  j["maxLevel"] = v.maxLevel; 
  j["queueState"] = v.queueState; 
  j["id"] = v.id; 
  j["blockedMinutesThreshold"] = v.blockedMinutesThreshold; 
  j["cacheName"] = v.cacheName; 
  j["gameMutators"] = v.gameMutators; 
  j["queueStateString"] = v.queueStateString; 
  j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
  j["supportedMapIds"] = v.supportedMapIds; 
  j["pointsConfigKey"] = v.pointsConfigKey; 
  j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
  j["typeString"] = v.typeString; 
  j["randomizeTeamSizes"] = v.randomizeTeamSizes; 
  j["botsCanSpawnOnBlueSide"] = v.botsCanSpawnOnBlueSide; 
  j["matchingThrottleConfig"] = v.matchingThrottleConfig; 
  j["disallowFreeChampions"] = v.disallowFreeChampions; 
  j["lastToggledOffTime"] = v.lastToggledOffTime; 
  j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay; 
  j["thresholdSize"] = v.thresholdSize; 
  j["type"] = v.type; 
  j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
  j["minLevel"] = v.minLevel; 
  j["lastToggledOnTime"] = v.lastToggledOnTime; 
  j["mapSelectionAlgorithm"] = v.mapSelectionAlgorithm; 
  }
  void from_json(const json& j, GameQueuesLcdsGameQueueConfig& v) {
  v.teamOnly = j.at("teamOnly").get<bool>(); 
  v.ranked = j.at("ranked").get<bool>(); 
  v.queueBonusKey = j.at("queueBonusKey").get<std::string>(); 
  v.thresholdEnabled = j.at("thresholdEnabled").get<bool>(); 
  v.gameMode = j.at("gameMode").get<std::string>(); 
  v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
  v.minimumQueueDodgeDelayTime = j.at("minimumQueueDodgeDelayTime").get<uint32_t>(); 
  v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
  v.queueState = j.at("queueState").get<std::string>(); 
  v.id = j.at("id").get<int32_t>(); 
  v.blockedMinutesThreshold = j.at("blockedMinutesThreshold").get<uint32_t>(); 
  v.cacheName = j.at("cacheName").get<std::string>(); 
  v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
  v.queueStateString = j.at("queueStateString").get<std::string>(); 
  v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<uint32_t>(); 
  v.supportedMapIds = j.at("supportedMapIds").get<std::vector<int32_t>>(); 
  v.pointsConfigKey = j.at("pointsConfigKey").get<std::string>(); 
  v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<uint32_t>(); 
  v.typeString = j.at("typeString").get<std::string>(); 
  v.randomizeTeamSizes = j.at("randomizeTeamSizes").get<bool>(); 
  v.botsCanSpawnOnBlueSide = j.at("botsCanSpawnOnBlueSide").get<bool>(); 
  v.matchingThrottleConfig = j.at("matchingThrottleConfig").get<GameQueuesLcdsMatchingThrottleConfig>(); 
  v.disallowFreeChampions = j.at("disallowFreeChampions").get<bool>(); 
  v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>(); 
  v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>(); 
  v.thresholdSize = j.at("thresholdSize").get<int64_t>(); 
  v.type = j.at("type").get<std::string>(); 
  v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>(); 
  v.minLevel = j.at("minLevel").get<uint32_t>(); 
  v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>(); 
  v.mapSelectionAlgorithm = j.at("mapSelectionAlgorithm").get<std::string>(); 
  }
}
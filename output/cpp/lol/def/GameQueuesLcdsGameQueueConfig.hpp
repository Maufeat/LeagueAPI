#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/GameQueuesLcdsMatchingThrottleConfig.hpp>
namespace lol {
  struct GameQueuesLcdsGameQueueConfig { 
    uint32_t maximumParticipantListSize;
    bool randomizeTeamSizes;
    uint32_t minimumQueueDodgeDelayTime;
    uint32_t minLevel;
    GameQueuesLcdsMatchingThrottleConfig matchingThrottleConfig;
    std::string queueStateString;
    bool thresholdEnabled;
    uint32_t blockedMinutesThreshold;
    uint32_t numPlayersPerTeam;
    bool botsCanSpawnOnBlueSide;
    bool disallowFreeChampions;
    uint32_t minimumParticipantListSize;
    bool ranked;
    std::string pointsConfigKey;
    int32_t id;
    uint64_t lastToggledOffTime;
    std::vector<int32_t> supportedMapIds;
    int64_t thresholdSize;
    std::string queueBonusKey;
    std::vector<std::string> gameMutators;
    uint32_t maxLevel;
    std::string typeString;
    std::string mapSelectionAlgorithm;
    int32_t gameTypeConfigId;
    bool teamOnly;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    std::string type;
    std::string gameMode;
    std::string cacheName;
    uint64_t lastToggledOnTime;
    std::string queueState; 
  };
  void to_json(json& j, const GameQueuesLcdsGameQueueConfig& v) {
  j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
  j["randomizeTeamSizes"] = v.randomizeTeamSizes; 
  j["minimumQueueDodgeDelayTime"] = v.minimumQueueDodgeDelayTime; 
  j["minLevel"] = v.minLevel; 
  j["matchingThrottleConfig"] = v.matchingThrottleConfig; 
  j["queueStateString"] = v.queueStateString; 
  j["thresholdEnabled"] = v.thresholdEnabled; 
  j["blockedMinutesThreshold"] = v.blockedMinutesThreshold; 
  j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
  j["botsCanSpawnOnBlueSide"] = v.botsCanSpawnOnBlueSide; 
  j["disallowFreeChampions"] = v.disallowFreeChampions; 
  j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
  j["ranked"] = v.ranked; 
  j["pointsConfigKey"] = v.pointsConfigKey; 
  j["id"] = v.id; 
  j["lastToggledOffTime"] = v.lastToggledOffTime; 
  j["supportedMapIds"] = v.supportedMapIds; 
  j["thresholdSize"] = v.thresholdSize; 
  j["queueBonusKey"] = v.queueBonusKey; 
  j["gameMutators"] = v.gameMutators; 
  j["maxLevel"] = v.maxLevel; 
  j["typeString"] = v.typeString; 
  j["mapSelectionAlgorithm"] = v.mapSelectionAlgorithm; 
  j["gameTypeConfigId"] = v.gameTypeConfigId; 
  j["teamOnly"] = v.teamOnly; 
  j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay; 
  j["type"] = v.type; 
  j["gameMode"] = v.gameMode; 
  j["cacheName"] = v.cacheName; 
  j["lastToggledOnTime"] = v.lastToggledOnTime; 
  j["queueState"] = v.queueState; 
  }
  void from_json(const json& j, GameQueuesLcdsGameQueueConfig& v) {
  v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>(); 
  v.randomizeTeamSizes = j.at("randomizeTeamSizes").get<bool>(); 
  v.minimumQueueDodgeDelayTime = j.at("minimumQueueDodgeDelayTime").get<uint32_t>(); 
  v.minLevel = j.at("minLevel").get<uint32_t>(); 
  v.matchingThrottleConfig = j.at("matchingThrottleConfig").get<GameQueuesLcdsMatchingThrottleConfig>(); 
  v.queueStateString = j.at("queueStateString").get<std::string>(); 
  v.thresholdEnabled = j.at("thresholdEnabled").get<bool>(); 
  v.blockedMinutesThreshold = j.at("blockedMinutesThreshold").get<uint32_t>(); 
  v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<uint32_t>(); 
  v.botsCanSpawnOnBlueSide = j.at("botsCanSpawnOnBlueSide").get<bool>(); 
  v.disallowFreeChampions = j.at("disallowFreeChampions").get<bool>(); 
  v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<uint32_t>(); 
  v.ranked = j.at("ranked").get<bool>(); 
  v.pointsConfigKey = j.at("pointsConfigKey").get<std::string>(); 
  v.id = j.at("id").get<int32_t>(); 
  v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>(); 
  v.supportedMapIds = j.at("supportedMapIds").get<std::vector<int32_t>>(); 
  v.thresholdSize = j.at("thresholdSize").get<int64_t>(); 
  v.queueBonusKey = j.at("queueBonusKey").get<std::string>(); 
  v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
  v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
  v.typeString = j.at("typeString").get<std::string>(); 
  v.mapSelectionAlgorithm = j.at("mapSelectionAlgorithm").get<std::string>(); 
  v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
  v.teamOnly = j.at("teamOnly").get<bool>(); 
  v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>(); 
  v.type = j.at("type").get<std::string>(); 
  v.gameMode = j.at("gameMode").get<std::string>(); 
  v.cacheName = j.at("cacheName").get<std::string>(); 
  v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>(); 
  v.queueState = j.at("queueState").get<std::string>(); 
  }
}
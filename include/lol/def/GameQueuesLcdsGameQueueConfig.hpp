#pragma once
#include "../base_def.hpp" 
#include "GameQueuesLcdsMatchingThrottleConfig.hpp"
namespace lol {
  struct GameQueuesLcdsGameQueueConfig { 
    std::string mapSelectionAlgorithm;
    bool teamOnly;
    std::string queueStateString;
    uint64_t lastToggledOnTime;
    bool disallowFreeChampions;
    uint32_t maximumParticipantListSize;
    uint32_t numPlayersPerTeam;
    GameQueuesLcdsMatchingThrottleConfig matchingThrottleConfig;
    bool ranked;
    std::string gameMode;
    bool thresholdEnabled;
    std::string pointsConfigKey;
    std::vector<std::string> gameMutators;
    std::string type;
    std::string queueBonusKey;
    uint32_t blockedMinutesThreshold;
    uint64_t lastToggledOffTime;
    bool botsCanSpawnOnBlueSide;
    std::string typeString;
    std::vector<int32_t> supportedMapIds;
    int64_t thresholdSize;
    std::string cacheName;
    uint32_t minLevel;
    bool randomizeTeamSizes;
    uint32_t maxLevel;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    uint32_t minimumParticipantListSize;
    int32_t id;
    std::string queueState;
    uint32_t minimumQueueDodgeDelayTime;
    int32_t gameTypeConfigId; 
  };
  inline void to_json(json& j, const GameQueuesLcdsGameQueueConfig& v) {
    j["mapSelectionAlgorithm"] = v.mapSelectionAlgorithm; 
    j["teamOnly"] = v.teamOnly; 
    j["queueStateString"] = v.queueStateString; 
    j["lastToggledOnTime"] = v.lastToggledOnTime; 
    j["disallowFreeChampions"] = v.disallowFreeChampions; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["matchingThrottleConfig"] = v.matchingThrottleConfig; 
    j["ranked"] = v.ranked; 
    j["gameMode"] = v.gameMode; 
    j["thresholdEnabled"] = v.thresholdEnabled; 
    j["pointsConfigKey"] = v.pointsConfigKey; 
    j["gameMutators"] = v.gameMutators; 
    j["type"] = v.type; 
    j["queueBonusKey"] = v.queueBonusKey; 
    j["blockedMinutesThreshold"] = v.blockedMinutesThreshold; 
    j["lastToggledOffTime"] = v.lastToggledOffTime; 
    j["botsCanSpawnOnBlueSide"] = v.botsCanSpawnOnBlueSide; 
    j["typeString"] = v.typeString; 
    j["supportedMapIds"] = v.supportedMapIds; 
    j["thresholdSize"] = v.thresholdSize; 
    j["cacheName"] = v.cacheName; 
    j["minLevel"] = v.minLevel; 
    j["randomizeTeamSizes"] = v.randomizeTeamSizes; 
    j["maxLevel"] = v.maxLevel; 
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay; 
    j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
    j["id"] = v.id; 
    j["queueState"] = v.queueState; 
    j["minimumQueueDodgeDelayTime"] = v.minimumQueueDodgeDelayTime; 
    j["gameTypeConfigId"] = v.gameTypeConfigId; 
  }
  inline void from_json(const json& j, GameQueuesLcdsGameQueueConfig& v) {
    v.mapSelectionAlgorithm = j.at("mapSelectionAlgorithm").get<std::string>(); 
    v.teamOnly = j.at("teamOnly").get<bool>(); 
    v.queueStateString = j.at("queueStateString").get<std::string>(); 
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>(); 
    v.disallowFreeChampions = j.at("disallowFreeChampions").get<bool>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<uint32_t>(); 
    v.matchingThrottleConfig = j.at("matchingThrottleConfig").get<GameQueuesLcdsMatchingThrottleConfig>(); 
    v.ranked = j.at("ranked").get<bool>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.thresholdEnabled = j.at("thresholdEnabled").get<bool>(); 
    v.pointsConfigKey = j.at("pointsConfigKey").get<std::string>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.type = j.at("type").get<std::string>(); 
    v.queueBonusKey = j.at("queueBonusKey").get<std::string>(); 
    v.blockedMinutesThreshold = j.at("blockedMinutesThreshold").get<uint32_t>(); 
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>(); 
    v.botsCanSpawnOnBlueSide = j.at("botsCanSpawnOnBlueSide").get<bool>(); 
    v.typeString = j.at("typeString").get<std::string>(); 
    v.supportedMapIds = j.at("supportedMapIds").get<std::vector<int32_t>>(); 
    v.thresholdSize = j.at("thresholdSize").get<int64_t>(); 
    v.cacheName = j.at("cacheName").get<std::string>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.randomizeTeamSizes = j.at("randomizeTeamSizes").get<bool>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>(); 
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<uint32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.queueState = j.at("queueState").get<std::string>(); 
    v.minimumQueueDodgeDelayTime = j.at("minimumQueueDodgeDelayTime").get<uint32_t>(); 
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
  }
}
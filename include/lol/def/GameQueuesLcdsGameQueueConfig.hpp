#pragma once
#include "../base_def.hpp" 
#include "GameQueuesLcdsMatchingThrottleConfig.hpp"
namespace lol {
  struct GameQueuesLcdsGameQueueConfig { 
    uint32_t blockedMinutesThreshold;
    bool botsCanSpawnOnBlueSide;
    std::string cacheName;
    bool disallowFreeChampions;
    std::string gameMode;
    std::vector<std::string> gameMutators;
    int32_t gameTypeConfigId;
    int32_t id;
    std::string mapSelectionAlgorithm;
    GameQueuesLcdsMatchingThrottleConfig matchingThrottleConfig;
    uint32_t maxLevel;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    uint32_t maximumParticipantListSize;
    uint32_t minLevel;
    uint32_t minimumParticipantListSize;
    uint32_t minimumQueueDodgeDelayTime;
    uint32_t numPlayersPerTeam;
    std::string pointsConfigKey;
    std::string queueBonusKey;
    std::string queueState;
    std::string queueStateString;
    bool randomizeTeamSizes;
    bool ranked;
    std::vector<int32_t> supportedMapIds;
    bool teamOnly;
    bool thresholdEnabled;
    int64_t thresholdSize;
    std::string type;
    std::string typeString;
    uint64_t lastToggledOffTime;
    uint64_t lastToggledOnTime; 
  };
  inline void to_json(json& j, const GameQueuesLcdsGameQueueConfig& v) {
    j["blockedMinutesThreshold"] = v.blockedMinutesThreshold; 
    j["botsCanSpawnOnBlueSide"] = v.botsCanSpawnOnBlueSide; 
    j["cacheName"] = v.cacheName; 
    j["disallowFreeChampions"] = v.disallowFreeChampions; 
    j["gameMode"] = v.gameMode; 
    j["gameMutators"] = v.gameMutators; 
    j["gameTypeConfigId"] = v.gameTypeConfigId; 
    j["id"] = v.id; 
    j["mapSelectionAlgorithm"] = v.mapSelectionAlgorithm; 
    j["matchingThrottleConfig"] = v.matchingThrottleConfig; 
    j["maxLevel"] = v.maxLevel; 
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["minLevel"] = v.minLevel; 
    j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
    j["minimumQueueDodgeDelayTime"] = v.minimumQueueDodgeDelayTime; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["pointsConfigKey"] = v.pointsConfigKey; 
    j["queueBonusKey"] = v.queueBonusKey; 
    j["queueState"] = v.queueState; 
    j["queueStateString"] = v.queueStateString; 
    j["randomizeTeamSizes"] = v.randomizeTeamSizes; 
    j["ranked"] = v.ranked; 
    j["supportedMapIds"] = v.supportedMapIds; 
    j["teamOnly"] = v.teamOnly; 
    j["thresholdEnabled"] = v.thresholdEnabled; 
    j["thresholdSize"] = v.thresholdSize; 
    j["type"] = v.type; 
    j["typeString"] = v.typeString; 
    j["lastToggledOffTime"] = v.lastToggledOffTime; 
    j["lastToggledOnTime"] = v.lastToggledOnTime; 
  }
  inline void from_json(const json& j, GameQueuesLcdsGameQueueConfig& v) {
    v.blockedMinutesThreshold = j.at("blockedMinutesThreshold").get<uint32_t>(); 
    v.botsCanSpawnOnBlueSide = j.at("botsCanSpawnOnBlueSide").get<bool>(); 
    v.cacheName = j.at("cacheName").get<std::string>(); 
    v.disallowFreeChampions = j.at("disallowFreeChampions").get<bool>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.mapSelectionAlgorithm = j.at("mapSelectionAlgorithm").get<std::string>(); 
    v.matchingThrottleConfig = j.at("matchingThrottleConfig").get<GameQueuesLcdsMatchingThrottleConfig>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<uint32_t>(); 
    v.minimumQueueDodgeDelayTime = j.at("minimumQueueDodgeDelayTime").get<uint32_t>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<uint32_t>(); 
    v.pointsConfigKey = j.at("pointsConfigKey").get<std::string>(); 
    v.queueBonusKey = j.at("queueBonusKey").get<std::string>(); 
    v.queueState = j.at("queueState").get<std::string>(); 
    v.queueStateString = j.at("queueStateString").get<std::string>(); 
    v.randomizeTeamSizes = j.at("randomizeTeamSizes").get<bool>(); 
    v.ranked = j.at("ranked").get<bool>(); 
    v.supportedMapIds = j.at("supportedMapIds").get<std::vector<int32_t>>(); 
    v.teamOnly = j.at("teamOnly").get<bool>(); 
    v.thresholdEnabled = j.at("thresholdEnabled").get<bool>(); 
    v.thresholdSize = j.at("thresholdSize").get<int64_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.typeString = j.at("typeString").get<std::string>(); 
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>(); 
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>(); 
  }
}
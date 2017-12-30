#pragma once
#include "../base_def.hpp" 
#include "GameQueuesLcdsMatchingThrottleConfig.hpp"
namespace lol {
  struct GameQueuesLcdsGameQueueConfig { 
    int32_t id;
    bool ranked;
    uint32_t maximumParticipantListSize;
    uint32_t maxLevel;
    uint32_t numPlayersPerTeam;
    std::string queueStateString;
    uint32_t minimumQueueDodgeDelayTime;
    bool botsCanSpawnOnBlueSide;
    int32_t gameTypeConfigId;
    bool randomizeTeamSizes;
    uint64_t lastToggledOnTime;
    std::string cacheName;
    std::string gameMode;
    uint32_t minimumParticipantListSize;
    GameQueuesLcdsMatchingThrottleConfig matchingThrottleConfig;
    std::string mapSelectionAlgorithm;
    int64_t thresholdSize;
    std::string pointsConfigKey;
    std::string queueState;
    std::vector<std::string> gameMutators;
    uint32_t minLevel;
    bool teamOnly;
    uint64_t lastToggledOffTime;
    std::vector<int32_t> supportedMapIds;
    std::string type;
    std::string typeString;
    bool thresholdEnabled;
    bool disallowFreeChampions;
    uint32_t blockedMinutesThreshold;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    std::string queueBonusKey; 
  };
  inline void to_json(json& j, const GameQueuesLcdsGameQueueConfig& v) {
    j["id"] = v.id; 
    j["ranked"] = v.ranked; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["maxLevel"] = v.maxLevel; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["queueStateString"] = v.queueStateString; 
    j["minimumQueueDodgeDelayTime"] = v.minimumQueueDodgeDelayTime; 
    j["botsCanSpawnOnBlueSide"] = v.botsCanSpawnOnBlueSide; 
    j["gameTypeConfigId"] = v.gameTypeConfigId; 
    j["randomizeTeamSizes"] = v.randomizeTeamSizes; 
    j["lastToggledOnTime"] = v.lastToggledOnTime; 
    j["cacheName"] = v.cacheName; 
    j["gameMode"] = v.gameMode; 
    j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
    j["matchingThrottleConfig"] = v.matchingThrottleConfig; 
    j["mapSelectionAlgorithm"] = v.mapSelectionAlgorithm; 
    j["thresholdSize"] = v.thresholdSize; 
    j["pointsConfigKey"] = v.pointsConfigKey; 
    j["queueState"] = v.queueState; 
    j["gameMutators"] = v.gameMutators; 
    j["minLevel"] = v.minLevel; 
    j["teamOnly"] = v.teamOnly; 
    j["lastToggledOffTime"] = v.lastToggledOffTime; 
    j["supportedMapIds"] = v.supportedMapIds; 
    j["type"] = v.type; 
    j["typeString"] = v.typeString; 
    j["thresholdEnabled"] = v.thresholdEnabled; 
    j["disallowFreeChampions"] = v.disallowFreeChampions; 
    j["blockedMinutesThreshold"] = v.blockedMinutesThreshold; 
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay; 
    j["queueBonusKey"] = v.queueBonusKey; 
  }
  inline void from_json(const json& j, GameQueuesLcdsGameQueueConfig& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.ranked = j.at("ranked").get<bool>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<uint32_t>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<uint32_t>(); 
    v.queueStateString = j.at("queueStateString").get<std::string>(); 
    v.minimumQueueDodgeDelayTime = j.at("minimumQueueDodgeDelayTime").get<uint32_t>(); 
    v.botsCanSpawnOnBlueSide = j.at("botsCanSpawnOnBlueSide").get<bool>(); 
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
    v.randomizeTeamSizes = j.at("randomizeTeamSizes").get<bool>(); 
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>(); 
    v.cacheName = j.at("cacheName").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<uint32_t>(); 
    v.matchingThrottleConfig = j.at("matchingThrottleConfig").get<GameQueuesLcdsMatchingThrottleConfig>(); 
    v.mapSelectionAlgorithm = j.at("mapSelectionAlgorithm").get<std::string>(); 
    v.thresholdSize = j.at("thresholdSize").get<int64_t>(); 
    v.pointsConfigKey = j.at("pointsConfigKey").get<std::string>(); 
    v.queueState = j.at("queueState").get<std::string>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.teamOnly = j.at("teamOnly").get<bool>(); 
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>(); 
    v.supportedMapIds = j.at("supportedMapIds").get<std::vector<int32_t>>(); 
    v.type = j.at("type").get<std::string>(); 
    v.typeString = j.at("typeString").get<std::string>(); 
    v.thresholdEnabled = j.at("thresholdEnabled").get<bool>(); 
    v.disallowFreeChampions = j.at("disallowFreeChampions").get<bool>(); 
    v.blockedMinutesThreshold = j.at("blockedMinutesThreshold").get<uint32_t>(); 
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>(); 
    v.queueBonusKey = j.at("queueBonusKey").get<std::string>(); 
  }
}
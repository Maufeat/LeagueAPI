#pragma once
#include "../base_def.hpp" 
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace lol {
  struct LolGameQueuesQueueCustomGameSubcategory { 
    std::string gameMutator;
    std::vector<LolGameQueuesQueueGameTypeConfig> mutators;
    LolGameQueuesQueueAvailability queueAvailability;
    int32_t maximumParticipantListSize;
    uint32_t minLevel;
    int32_t numPlayersPerTeam;
    int32_t mapId;
    int32_t maxPlayerCount;
    std::string gameMode;
    uint32_t maxLevel;
    int32_t minimumParticipantListSize; 
  };
  inline void to_json(json& j, const LolGameQueuesQueueCustomGameSubcategory& v) {
    j["gameMutator"] = v.gameMutator; 
    j["mutators"] = v.mutators; 
    j["queueAvailability"] = v.queueAvailability; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["minLevel"] = v.minLevel; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["mapId"] = v.mapId; 
    j["maxPlayerCount"] = v.maxPlayerCount; 
    j["gameMode"] = v.gameMode; 
    j["maxLevel"] = v.maxLevel; 
    j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
  }
  inline void from_json(const json& j, LolGameQueuesQueueCustomGameSubcategory& v) {
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.mutators = j.at("mutators").get<std::vector<LolGameQueuesQueueGameTypeConfig>>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.maxPlayerCount = j.at("maxPlayerCount").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>(); 
  }
}
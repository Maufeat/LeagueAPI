#pragma once
#include "../base_def.hpp" 
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace lol {
  struct LolGameQueuesQueueCustomGameSubcategory { 
    int32_t maxPlayerCount;
    LolGameQueuesQueueAvailability queueAvailability;
    int32_t mapId;
    int32_t maximumParticipantListSize;
    std::string gameMode;
    uint32_t minLevel;
    uint32_t maxLevel;
    std::string gameMutator;
    int32_t minimumParticipantListSize;
    int32_t numPlayersPerTeam;
    std::vector<LolGameQueuesQueueGameTypeConfig> mutators; 
  };
  inline void to_json(json& j, const LolGameQueuesQueueCustomGameSubcategory& v) {
    j["maxPlayerCount"] = v.maxPlayerCount; 
    j["queueAvailability"] = v.queueAvailability; 
    j["mapId"] = v.mapId; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["gameMode"] = v.gameMode; 
    j["minLevel"] = v.minLevel; 
    j["maxLevel"] = v.maxLevel; 
    j["gameMutator"] = v.gameMutator; 
    j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["mutators"] = v.mutators; 
  }
  inline void from_json(const json& j, LolGameQueuesQueueCustomGameSubcategory& v) {
    v.maxPlayerCount = j.at("maxPlayerCount").get<int32_t>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.mutators = j.at("mutators").get<std::vector<LolGameQueuesQueueGameTypeConfig>>(); 
  }
}
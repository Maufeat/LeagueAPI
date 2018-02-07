#pragma once
#include "../base_def.hpp" 
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace lol {
  struct LolGameQueuesQueueCustomGameSubcategory { 
    int32_t mapId;
    std::string gameMode;
    std::string gameMutator;
    std::vector<LolGameQueuesQueueGameTypeConfig> mutators;
    int32_t numPlayersPerTeam;
    int32_t minimumParticipantListSize;
    int32_t maximumParticipantListSize;
    int32_t maxPlayerCount;
    uint32_t minLevel;
    uint32_t maxLevel;
    LolGameQueuesQueueAvailability queueAvailability; 
  };
  inline void to_json(json& j, const LolGameQueuesQueueCustomGameSubcategory& v) {
    j["mapId"] = v.mapId; 
    j["gameMode"] = v.gameMode; 
    j["gameMutator"] = v.gameMutator; 
    j["mutators"] = v.mutators; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["maxPlayerCount"] = v.maxPlayerCount; 
    j["minLevel"] = v.minLevel; 
    j["maxLevel"] = v.maxLevel; 
    j["queueAvailability"] = v.queueAvailability; 
  }
  inline void from_json(const json& j, LolGameQueuesQueueCustomGameSubcategory& v) {
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.mutators = j.at("mutators").get<std::vector<LolGameQueuesQueueGameTypeConfig>>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.maxPlayerCount = j.at("maxPlayerCount").get<int32_t>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>(); 
  }
}
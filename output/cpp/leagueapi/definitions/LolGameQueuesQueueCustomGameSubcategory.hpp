#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolGameQueuesQueueGameTypeConfig.hpp>
#include <leagueapi/definitions/LolGameQueuesQueueAvailability.hpp>

namespace leagueapi {
  struct LolGameQueuesQueueCustomGameSubcategory { /**/ 
    int32_t numPlayersPerTeam;/**/
    std::string gameMutator;/**/
    LolGameQueuesQueueAvailability queueAvailability;/**/
    int32_t maxPlayerCount;/**/
    uint32_t maxLevel;/**/
    int32_t minimumParticipantListSize;/**/
    std::vector<LolGameQueuesQueueGameTypeConfig> mutators;/**/
    uint32_t minLevel;/**/
    int32_t mapId;/**/
    int32_t maximumParticipantListSize;/**/
    std::string gameMode;/**/
  };
  static void to_json(json& j, const LolGameQueuesQueueCustomGameSubcategory& v) { 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["gameMutator"] = v.gameMutator;
    j["queueAvailability"] = v.queueAvailability;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["maxLevel"] = v.maxLevel;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["mutators"] = v.mutators;
    j["minLevel"] = v.minLevel;
    j["mapId"] = v.mapId;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["gameMode"] = v.gameMode;
  }
  static void from_json(const json& j, LolGameQueuesQueueCustomGameSubcategory& v) { 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>(); 
    v.maxPlayerCount = j.at("maxPlayerCount").get<int32_t>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>(); 
    v.mutators = j.at("mutators").get<std::vector<LolGameQueuesQueueGameTypeConfig>>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
  }
} 
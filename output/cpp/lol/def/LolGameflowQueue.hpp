#pragma once
#include "../base_def.hpp" 
#include "LolGameflowQueueReward.hpp"
#include "LolGameflowQueueGameTypeConfig.hpp"
#include "LolGameflowQueueGameCategory.hpp"
#include "LolGameflowQueueAvailability.hpp"
namespace lol {
  struct LolGameflowQueue { 
    std::string gameMutator;
    bool spectatorEnabled;
    bool areFreeChampionsAllowed;
    int32_t mapId;
    LolGameflowQueueGameCategory category;
    std::string shortName;
    uint32_t maxLevel;
    int32_t id;
    int32_t numPlayersPerTeam;
    LolGameflowQueueGameTypeConfig gameTypeConfig;
    LolGameflowQueueAvailability queueAvailability;
    bool isTeamBuilderManaged;
    int32_t minimumParticipantListSize;
    bool isTeamOnly;
    std::string detailedDescription;
    bool isRanked;
    LolGameflowQueueReward queueRewards;
    std::string name;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    std::string type;
    int32_t maximumParticipantListSize;
    uint32_t minLevel;
    std::string description;
    std::string gameMode;
    std::string assetMutator; 
  };
  inline void to_json(json& j, const LolGameflowQueue& v) {
    j["gameMutator"] = v.gameMutator; 
    j["spectatorEnabled"] = v.spectatorEnabled; 
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed; 
    j["mapId"] = v.mapId; 
    j["category"] = v.category; 
    j["shortName"] = v.shortName; 
    j["maxLevel"] = v.maxLevel; 
    j["id"] = v.id; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["gameTypeConfig"] = v.gameTypeConfig; 
    j["queueAvailability"] = v.queueAvailability; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
    j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
    j["isTeamOnly"] = v.isTeamOnly; 
    j["detailedDescription"] = v.detailedDescription; 
    j["isRanked"] = v.isRanked; 
    j["queueRewards"] = v.queueRewards; 
    j["name"] = v.name; 
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay; 
    j["type"] = v.type; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["minLevel"] = v.minLevel; 
    j["description"] = v.description; 
    j["gameMode"] = v.gameMode; 
    j["assetMutator"] = v.assetMutator; 
  }
  inline void from_json(const json& j, LolGameflowQueue& v) {
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>(); 
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.category = j.at("category").get<LolGameflowQueueGameCategory>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameflowQueueGameTypeConfig>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolGameflowQueueAvailability>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>(); 
    v.isTeamOnly = j.at("isTeamOnly").get<bool>(); 
    v.detailedDescription = j.at("detailedDescription").get<std::string>(); 
    v.isRanked = j.at("isRanked").get<bool>(); 
    v.queueRewards = j.at("queueRewards").get<LolGameflowQueueReward>(); 
    v.name = j.at("name").get<std::string>(); 
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.assetMutator = j.at("assetMutator").get<std::string>(); 
  }
}
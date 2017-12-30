#pragma once
#include "../base_def.hpp" 
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueGameCategory.hpp"
#include "LolGameQueuesQueueReward.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace lol {
  struct LolGameQueuesQueue { 
    std::string name;
    bool isRanked;
    int32_t id;
    uint32_t championsRequiredToPlay;
    int32_t maximumParticipantListSize;
    uint32_t maxLevel;
    std::string description;
    LolGameQueuesQueueGameCategory category;
    std::string type;
    std::string detailedDescription;
    bool areFreeChampionsAllowed;
    uint64_t lastToggledOnTime;
    LolGameQueuesQueueAvailability queueAvailability;
    int32_t mapId;
    std::string shortName;
    std::string assetMutator;
    int32_t minimumParticipantListSize;
    bool isTeamOnly;
    uint64_t lastToggledOffTime;
    uint32_t minLevel;
    std::string gameMutator;
    std::string gameMode;
    LolGameQueuesQueueReward queueRewards;
    std::vector<int32_t> allowablePremadeSizes;
    LolGameQueuesQueueGameTypeConfig gameTypeConfig;
    int32_t numPlayersPerTeam;
    bool showPositionSelector;
    bool spectatorEnabled;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    bool isTeamBuilderManaged; 
  };
  inline void to_json(json& j, const LolGameQueuesQueue& v) {
    j["name"] = v.name; 
    j["isRanked"] = v.isRanked; 
    j["id"] = v.id; 
    j["championsRequiredToPlay"] = v.championsRequiredToPlay; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["maxLevel"] = v.maxLevel; 
    j["description"] = v.description; 
    j["category"] = v.category; 
    j["type"] = v.type; 
    j["detailedDescription"] = v.detailedDescription; 
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed; 
    j["lastToggledOnTime"] = v.lastToggledOnTime; 
    j["queueAvailability"] = v.queueAvailability; 
    j["mapId"] = v.mapId; 
    j["shortName"] = v.shortName; 
    j["assetMutator"] = v.assetMutator; 
    j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
    j["isTeamOnly"] = v.isTeamOnly; 
    j["lastToggledOffTime"] = v.lastToggledOffTime; 
    j["minLevel"] = v.minLevel; 
    j["gameMutator"] = v.gameMutator; 
    j["gameMode"] = v.gameMode; 
    j["queueRewards"] = v.queueRewards; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["gameTypeConfig"] = v.gameTypeConfig; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["spectatorEnabled"] = v.spectatorEnabled; 
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
  }
  inline void from_json(const json& j, LolGameQueuesQueue& v) {
    v.name = j.at("name").get<std::string>(); 
    v.isRanked = j.at("isRanked").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.category = j.at("category").get<LolGameQueuesQueueGameCategory>(); 
    v.type = j.at("type").get<std::string>(); 
    v.detailedDescription = j.at("detailedDescription").get<std::string>(); 
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.assetMutator = j.at("assetMutator").get<std::string>(); 
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>(); 
    v.isTeamOnly = j.at("isTeamOnly").get<bool>(); 
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.queueRewards = j.at("queueRewards").get<LolGameQueuesQueueReward>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameQueuesQueueGameTypeConfig>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>(); 
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
  }
}
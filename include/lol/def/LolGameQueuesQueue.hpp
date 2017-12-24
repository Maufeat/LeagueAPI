#pragma once
#include "../base_def.hpp" 
#include "LolGameQueuesQueueGameTypeConfig.hpp"
#include "LolGameQueuesQueueGameCategory.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueReward.hpp"
namespace lol {
  struct LolGameQueuesQueue { 
    LolGameQueuesQueueAvailability queueAvailability;
    bool isTeamOnly;
    uint64_t lastToggledOnTime;
    int32_t maximumParticipantListSize;
    int32_t numPlayersPerTeam;
    std::string description;
    LolGameQueuesQueueGameTypeConfig gameTypeConfig;
    LolGameQueuesQueueGameCategory category;
    std::string gameMode;
    std::string gameMutator;
    bool isTeamBuilderManaged;
    std::string type;
    std::string detailedDescription;
    bool showPositionSelector;
    bool isRanked;
    uint64_t lastToggledOffTime;
    std::vector<int32_t> allowablePremadeSizes;
    std::string name;
    uint32_t championsRequiredToPlay;
    bool spectatorEnabled;
    int32_t mapId;
    uint32_t maxLevel;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    int32_t minimumParticipantListSize;
    std::string shortName;
    int32_t id;
    LolGameQueuesQueueReward queueRewards;
    std::string assetMutator;
    bool areFreeChampionsAllowed;
    uint32_t minLevel; 
  };
  inline void to_json(json& j, const LolGameQueuesQueue& v) {
    j["queueAvailability"] = v.queueAvailability; 
    j["isTeamOnly"] = v.isTeamOnly; 
    j["lastToggledOnTime"] = v.lastToggledOnTime; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["description"] = v.description; 
    j["gameTypeConfig"] = v.gameTypeConfig; 
    j["category"] = v.category; 
    j["gameMode"] = v.gameMode; 
    j["gameMutator"] = v.gameMutator; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
    j["type"] = v.type; 
    j["detailedDescription"] = v.detailedDescription; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["isRanked"] = v.isRanked; 
    j["lastToggledOffTime"] = v.lastToggledOffTime; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["name"] = v.name; 
    j["championsRequiredToPlay"] = v.championsRequiredToPlay; 
    j["spectatorEnabled"] = v.spectatorEnabled; 
    j["mapId"] = v.mapId; 
    j["maxLevel"] = v.maxLevel; 
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay; 
    j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
    j["shortName"] = v.shortName; 
    j["id"] = v.id; 
    j["queueRewards"] = v.queueRewards; 
    j["assetMutator"] = v.assetMutator; 
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed; 
    j["minLevel"] = v.minLevel; 
  }
  inline void from_json(const json& j, LolGameQueuesQueue& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>(); 
    v.isTeamOnly = j.at("isTeamOnly").get<bool>(); 
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameQueuesQueueGameTypeConfig>(); 
    v.category = j.at("category").get<LolGameQueuesQueueGameCategory>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.type = j.at("type").get<std::string>(); 
    v.detailedDescription = j.at("detailedDescription").get<std::string>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.isRanked = j.at("isRanked").get<bool>(); 
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>(); 
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>(); 
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.queueRewards = j.at("queueRewards").get<LolGameQueuesQueueReward>(); 
    v.assetMutator = j.at("assetMutator").get<std::string>(); 
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
  }
}
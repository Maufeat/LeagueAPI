#pragma once
#include "../base_def.hpp" 
#include "LolGameQueuesQueueGameCategory.hpp"
#include "LolGameQueuesQueueReward.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
namespace lol {
  struct LolGameQueuesQueue { 
    std::string gameMutator;
    bool spectatorEnabled;
    bool areFreeChampionsAllowed;
    int32_t mapId;
    LolGameQueuesQueueGameCategory category;
    std::string shortName;
    uint32_t maxLevel;
    int32_t id;
    int32_t numPlayersPerTeam;
    LolGameQueuesQueueGameTypeConfig gameTypeConfig;
    LolGameQueuesQueueAvailability queueAvailability;
    bool isTeamBuilderManaged;
    int32_t minimumParticipantListSize;
    bool isTeamOnly;
    std::vector<int32_t> allowablePremadeSizes;
    std::string detailedDescription;
    bool isRanked;
    uint32_t championsRequiredToPlay;
    LolGameQueuesQueueReward queueRewards;
    std::string name;
    uint64_t lastToggledOffTime;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    std::string type;
    int32_t maximumParticipantListSize;
    uint32_t minLevel;
    uint64_t lastToggledOnTime;
    std::string description;
    std::string gameMode;
    std::string assetMutator;
    bool showPositionSelector; 
  };
  inline void to_json(json& j, const LolGameQueuesQueue& v) {
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
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["detailedDescription"] = v.detailedDescription; 
    j["isRanked"] = v.isRanked; 
    j["championsRequiredToPlay"] = v.championsRequiredToPlay; 
    j["queueRewards"] = v.queueRewards; 
    j["name"] = v.name; 
    j["lastToggledOffTime"] = v.lastToggledOffTime; 
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay; 
    j["type"] = v.type; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["minLevel"] = v.minLevel; 
    j["lastToggledOnTime"] = v.lastToggledOnTime; 
    j["description"] = v.description; 
    j["gameMode"] = v.gameMode; 
    j["assetMutator"] = v.assetMutator; 
    j["showPositionSelector"] = v.showPositionSelector; 
  }
  inline void from_json(const json& j, LolGameQueuesQueue& v) {
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>(); 
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.category = j.at("category").get<LolGameQueuesQueueGameCategory>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameQueuesQueueGameTypeConfig>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>(); 
    v.isTeamOnly = j.at("isTeamOnly").get<bool>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.detailedDescription = j.at("detailedDescription").get<std::string>(); 
    v.isRanked = j.at("isRanked").get<bool>(); 
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>(); 
    v.queueRewards = j.at("queueRewards").get<LolGameQueuesQueueReward>(); 
    v.name = j.at("name").get<std::string>(); 
    v.lastToggledOffTime = j.at("lastToggledOffTime").get<uint64_t>(); 
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.lastToggledOnTime = j.at("lastToggledOnTime").get<uint64_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.assetMutator = j.at("assetMutator").get<std::string>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
  }
}
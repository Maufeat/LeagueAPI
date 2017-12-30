#pragma once
#include "../base_def.hpp" 
#include "LolClashQueueAvailability.hpp"
#include "LolClashQueueGameCategory.hpp"
#include "LolClashQueueGameTypeConfig.hpp"
#include "LolClashQueueReward.hpp"
namespace lol {
  struct LolClashQueue { 
    std::string name;
    bool isRanked;
    int32_t id;
    int32_t maximumParticipantListSize;
    uint32_t maxLevel;
    std::string description;
    LolClashQueueGameCategory category;
    std::string type;
    std::string detailedDescription;
    bool areFreeChampionsAllowed;
    LolClashQueueAvailability queueAvailability;
    int32_t mapId;
    std::string shortName;
    bool spectatorEnabled;
    int32_t minimumParticipantListSize;
    bool isTeamOnly;
    uint32_t minLevel;
    std::string gameMutator;
    std::string gameMode;
    LolClashQueueReward queueRewards;
    LolClashQueueGameTypeConfig gameTypeConfig;
    int32_t numPlayersPerTeam;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    bool isTeamBuilderManaged; 
  };
  inline void to_json(json& j, const LolClashQueue& v) {
    j["name"] = v.name; 
    j["isRanked"] = v.isRanked; 
    j["id"] = v.id; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["maxLevel"] = v.maxLevel; 
    j["description"] = v.description; 
    j["category"] = v.category; 
    j["type"] = v.type; 
    j["detailedDescription"] = v.detailedDescription; 
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed; 
    j["queueAvailability"] = v.queueAvailability; 
    j["mapId"] = v.mapId; 
    j["shortName"] = v.shortName; 
    j["spectatorEnabled"] = v.spectatorEnabled; 
    j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
    j["isTeamOnly"] = v.isTeamOnly; 
    j["minLevel"] = v.minLevel; 
    j["gameMutator"] = v.gameMutator; 
    j["gameMode"] = v.gameMode; 
    j["queueRewards"] = v.queueRewards; 
    j["gameTypeConfig"] = v.gameTypeConfig; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
  }
  inline void from_json(const json& j, LolClashQueue& v) {
    v.name = j.at("name").get<std::string>(); 
    v.isRanked = j.at("isRanked").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.category = j.at("category").get<LolClashQueueGameCategory>(); 
    v.type = j.at("type").get<std::string>(); 
    v.detailedDescription = j.at("detailedDescription").get<std::string>(); 
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolClashQueueAvailability>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>(); 
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>(); 
    v.isTeamOnly = j.at("isTeamOnly").get<bool>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.queueRewards = j.at("queueRewards").get<LolClashQueueReward>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolClashQueueGameTypeConfig>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
  }
}
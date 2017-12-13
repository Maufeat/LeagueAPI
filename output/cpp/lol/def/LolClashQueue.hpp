#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashQueueReward.hpp>
#include <lol/def/LolClashQueueGameCategory.hpp>
#include <lol/def/LolClashQueueAvailability.hpp>
#include <lol/def/LolClashQueueGameTypeConfig.hpp>
namespace lol {
  struct LolClashQueue { 
    int32_t maximumParticipantListSize;
    std::string shortName;
    uint32_t minLevel;
    int32_t id;
    std::string name;
    bool areFreeChampionsAllowed;
    int32_t numPlayersPerTeam;
    int32_t minimumParticipantListSize;
    LolClashQueueReward queueRewards;
    bool isTeamOnly;
    int32_t mapId;
    bool isRanked;
    std::string gameMutator;
    std::string detailedDescription;
    bool isTeamBuilderManaged;
    std::string description;
    bool spectatorEnabled;
    uint32_t maxLevel;
    LolClashQueueGameCategory category;
    LolClashQueueAvailability queueAvailability;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    std::string type;
    std::string gameMode;
    LolClashQueueGameTypeConfig gameTypeConfig; 
  };
  void to_json(json& j, const LolClashQueue& v) {
  j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
  j["shortName"] = v.shortName; 
  j["minLevel"] = v.minLevel; 
  j["id"] = v.id; 
  j["name"] = v.name; 
  j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed; 
  j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
  j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
  j["queueRewards"] = v.queueRewards; 
  j["isTeamOnly"] = v.isTeamOnly; 
  j["mapId"] = v.mapId; 
  j["isRanked"] = v.isRanked; 
  j["gameMutator"] = v.gameMutator; 
  j["detailedDescription"] = v.detailedDescription; 
  j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
  j["description"] = v.description; 
  j["spectatorEnabled"] = v.spectatorEnabled; 
  j["maxLevel"] = v.maxLevel; 
  j["category"] = v.category; 
  j["queueAvailability"] = v.queueAvailability; 
  j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay; 
  j["type"] = v.type; 
  j["gameMode"] = v.gameMode; 
  j["gameTypeConfig"] = v.gameTypeConfig; 
  }
  void from_json(const json& j, LolClashQueue& v) {
  v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
  v.shortName = j.at("shortName").get<std::string>(); 
  v.minLevel = j.at("minLevel").get<uint32_t>(); 
  v.id = j.at("id").get<int32_t>(); 
  v.name = j.at("name").get<std::string>(); 
  v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
  v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
  v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>(); 
  v.queueRewards = j.at("queueRewards").get<LolClashQueueReward>(); 
  v.isTeamOnly = j.at("isTeamOnly").get<bool>(); 
  v.mapId = j.at("mapId").get<int32_t>(); 
  v.isRanked = j.at("isRanked").get<bool>(); 
  v.gameMutator = j.at("gameMutator").get<std::string>(); 
  v.detailedDescription = j.at("detailedDescription").get<std::string>(); 
  v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
  v.description = j.at("description").get<std::string>(); 
  v.spectatorEnabled = j.at("spectatorEnabled").get<bool>(); 
  v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
  v.category = j.at("category").get<LolClashQueueGameCategory>(); 
  v.queueAvailability = j.at("queueAvailability").get<LolClashQueueAvailability>(); 
  v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>(); 
  v.type = j.at("type").get<std::string>(); 
  v.gameMode = j.at("gameMode").get<std::string>(); 
  v.gameTypeConfig = j.at("gameTypeConfig").get<LolClashQueueGameTypeConfig>(); 
  }
}
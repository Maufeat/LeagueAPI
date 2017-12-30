#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityQueueAvailability.hpp"
namespace lol {
  struct LolQueueEligibilityQueue { 
    LolQueueEligibilityQueueAvailability queueAvailability;
    bool isRanked;
    int32_t id;
    uint32_t championsRequiredToPlay;
    int32_t maximumParticipantListSize;
    uint32_t maxLevel;
    uint32_t minLevel;
    std::string type;
    bool showPositionSelector;
    int32_t numPlayersPerTeam;
    bool areFreeChampionsAllowed; 
  };
  inline void to_json(json& j, const LolQueueEligibilityQueue& v) {
    j["queueAvailability"] = v.queueAvailability; 
    j["isRanked"] = v.isRanked; 
    j["id"] = v.id; 
    j["championsRequiredToPlay"] = v.championsRequiredToPlay; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["maxLevel"] = v.maxLevel; 
    j["minLevel"] = v.minLevel; 
    j["type"] = v.type; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed; 
  }
  inline void from_json(const json& j, LolQueueEligibilityQueue& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolQueueEligibilityQueueAvailability>(); 
    v.isRanked = j.at("isRanked").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityQueueAvailability.hpp"
namespace lol {
  struct LolQueueEligibilityQueue { 
    uint32_t maxLevel;
    bool isRanked;
    LolQueueEligibilityQueueAvailability queueAvailability;
    std::string type;
    bool areFreeChampionsAllowed;
    int32_t id;
    uint32_t championsRequiredToPlay;
    int32_t maximumParticipantListSize;
    uint32_t minLevel;
    bool showPositionSelector;
    int32_t numPlayersPerTeam; 
  };
  inline void to_json(json& j, const LolQueueEligibilityQueue& v) {
    j["maxLevel"] = v.maxLevel; 
    j["isRanked"] = v.isRanked; 
    j["queueAvailability"] = v.queueAvailability; 
    j["type"] = v.type; 
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed; 
    j["id"] = v.id; 
    j["championsRequiredToPlay"] = v.championsRequiredToPlay; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["minLevel"] = v.minLevel; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
  }
  inline void from_json(const json& j, LolQueueEligibilityQueue& v) {
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.isRanked = j.at("isRanked").get<bool>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolQueueEligibilityQueueAvailability>(); 
    v.type = j.at("type").get<std::string>(); 
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityQueueAvailability.hpp"
namespace lol {
  struct LolQueueEligibilityQueue { 
    int32_t id;
    std::string type;
    int32_t numPlayersPerTeam;
    int32_t maximumParticipantListSize;
    uint32_t minLevel;
    uint32_t maxLevel;
    LolQueueEligibilityQueueAvailability queueAvailability;
    bool areFreeChampionsAllowed;
    bool isRanked;
    uint32_t championsRequiredToPlay;
    std::vector<int32_t> allowablePremadeSizes;
    bool showPositionSelector; 
  };
  inline void to_json(json& j, const LolQueueEligibilityQueue& v) {
    j["id"] = v.id; 
    j["type"] = v.type; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["minLevel"] = v.minLevel; 
    j["maxLevel"] = v.maxLevel; 
    j["queueAvailability"] = v.queueAvailability; 
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed; 
    j["isRanked"] = v.isRanked; 
    j["championsRequiredToPlay"] = v.championsRequiredToPlay; 
    j["allowablePremadeSizes"] = v.allowablePremadeSizes; 
    j["showPositionSelector"] = v.showPositionSelector; 
  }
  inline void from_json(const json& j, LolQueueEligibilityQueue& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolQueueEligibilityQueueAvailability>(); 
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
    v.isRanked = j.at("isRanked").get<bool>(); 
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>(); 
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
  }
}
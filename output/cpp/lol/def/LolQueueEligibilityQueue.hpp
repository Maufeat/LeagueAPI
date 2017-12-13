#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolQueueEligibilityQueueAvailability.hpp>
namespace lol {
  struct LolQueueEligibilityQueue { 
    uint32_t championsRequiredToPlay;
    bool showPositionSelector;
    std::string type;
    int32_t maximumParticipantListSize;
    int32_t numPlayersPerTeam;
    uint32_t minLevel;
    bool isRanked;
    LolQueueEligibilityQueueAvailability queueAvailability;
    bool areFreeChampionsAllowed;
    uint32_t maxLevel;
    int32_t id; 
  };
  void to_json(json& j, const LolQueueEligibilityQueue& v) {
    j["championsRequiredToPlay"] = v.championsRequiredToPlay; 
    j["showPositionSelector"] = v.showPositionSelector; 
    j["type"] = v.type; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["minLevel"] = v.minLevel; 
    j["isRanked"] = v.isRanked; 
    j["queueAvailability"] = v.queueAvailability; 
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed; 
    j["maxLevel"] = v.maxLevel; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolQueueEligibilityQueue& v) {
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.type = j.at("type").get<std::string>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.isRanked = j.at("isRanked").get<bool>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolQueueEligibilityQueueAvailability>(); 
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}
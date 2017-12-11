#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolQueueEligibilityQueueAvailability.hpp>"

namespace leagueapi {
  struct LolQueueEligibilityQueue { /**/ 
    int32_t numPlayersPerTeam;/**/
    int32_t maximumParticipantListSize;/**/
    bool showPositionSelector;/**/
    LolQueueEligibilityQueueAvailability queueAvailability;/**/
    uint32_t minLevel;/**/
    int32_t id;/**/
    std::string type;/**/
    bool areFreeChampionsAllowed;/**/
    uint32_t maxLevel;/**/
    uint32_t championsRequiredToPlay;/**/
    bool isRanked;/**/
  };
  static void to_json(json& j, const LolQueueEligibilityQueue& v) { 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["showPositionSelector"] = v.showPositionSelector;
    j["queueAvailability"] = v.queueAvailability;
    j["minLevel"] = v.minLevel;
    j["id"] = v.id;
    j["type"] = v.type;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["maxLevel"] = v.maxLevel;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
    j["isRanked"] = v.isRanked;
  }
  static void from_json(const json& j, LolQueueEligibilityQueue& v) { 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.showPositionSelector = j.at("showPositionSelector").get<bool>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolQueueEligibilityQueueAvailability>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t>(); 
    v.isRanked = j.at("isRanked").get<bool>(); 
  }
} 
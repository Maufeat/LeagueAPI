#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingMatchmakingSearchErrorResource.hpp"
#include "LolMatchmakingMatchmakingLowPriorityData.hpp"
#include "LolMatchmakingMatchmakingDodgeData.hpp"
#include "LolMatchmakingMatchmakingSearchState.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResource.hpp"
namespace lol {
  struct LolMatchmakingMatchmakingSearchResource { 
    std::vector<LolMatchmakingMatchmakingSearchErrorResource> errors;
    LolMatchmakingMatchmakingDodgeData dodgeData;
    std::string lobbyId;
    bool isCurrentlyInQueue;
    float timeInQueue;
    float estimatedQueueTime;
    LolMatchmakingMatchmakingLowPriorityData lowPriorityData;
    LolMatchmakingMatchmakingReadyCheckResource readyCheck;
    int32_t queueId;
    LolMatchmakingMatchmakingSearchState searchState; 
  };
  inline void to_json(json& j, const LolMatchmakingMatchmakingSearchResource& v) {
    j["errors"] = v.errors; 
    j["dodgeData"] = v.dodgeData; 
    j["lobbyId"] = v.lobbyId; 
    j["isCurrentlyInQueue"] = v.isCurrentlyInQueue; 
    j["timeInQueue"] = v.timeInQueue; 
    j["estimatedQueueTime"] = v.estimatedQueueTime; 
    j["lowPriorityData"] = v.lowPriorityData; 
    j["readyCheck"] = v.readyCheck; 
    j["queueId"] = v.queueId; 
    j["searchState"] = v.searchState; 
  }
  inline void from_json(const json& j, LolMatchmakingMatchmakingSearchResource& v) {
    v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource>>(); 
    v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData>(); 
    v.lobbyId = j.at("lobbyId").get<std::string>(); 
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>(); 
    v.timeInQueue = j.at("timeInQueue").get<float>(); 
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>(); 
    v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData>(); 
    v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState>(); 
  }
}
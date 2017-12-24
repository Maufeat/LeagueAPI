#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingMatchmakingDodgeData.hpp"
#include "LolMatchmakingMatchmakingSearchState.hpp"
#include "LolMatchmakingMatchmakingLowPriorityData.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResource.hpp"
#include "LolMatchmakingMatchmakingSearchErrorResource.hpp"
namespace lol {
  struct LolMatchmakingMatchmakingSearchResource { 
    LolMatchmakingMatchmakingReadyCheckResource readyCheck;
    std::string lobbyId;
    int32_t queueId;
    std::vector<LolMatchmakingMatchmakingSearchErrorResource> errors;
    bool isCurrentlyInQueue;
    float timeInQueue;
    LolMatchmakingMatchmakingLowPriorityData lowPriorityData;
    float estimatedQueueTime;
    LolMatchmakingMatchmakingSearchState searchState;
    LolMatchmakingMatchmakingDodgeData dodgeData; 
  };
  inline void to_json(json& j, const LolMatchmakingMatchmakingSearchResource& v) {
    j["readyCheck"] = v.readyCheck; 
    j["lobbyId"] = v.lobbyId; 
    j["queueId"] = v.queueId; 
    j["errors"] = v.errors; 
    j["isCurrentlyInQueue"] = v.isCurrentlyInQueue; 
    j["timeInQueue"] = v.timeInQueue; 
    j["lowPriorityData"] = v.lowPriorityData; 
    j["estimatedQueueTime"] = v.estimatedQueueTime; 
    j["searchState"] = v.searchState; 
    j["dodgeData"] = v.dodgeData; 
  }
  inline void from_json(const json& j, LolMatchmakingMatchmakingSearchResource& v) {
    v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource>(); 
    v.lobbyId = j.at("lobbyId").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource>>(); 
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>(); 
    v.timeInQueue = j.at("timeInQueue").get<float>(); 
    v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData>(); 
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>(); 
    v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState>(); 
    v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData>(); 
  }
}
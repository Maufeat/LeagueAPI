#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingMatchmakingSearchErrorResource.hpp"
#include "LolMatchmakingMatchmakingLowPriorityData.hpp"
#include "LolMatchmakingMatchmakingSearchState.hpp"
#include "LolMatchmakingMatchmakingReadyCheckResource.hpp"
#include "LolMatchmakingMatchmakingDodgeData.hpp"
namespace lol {
  struct LolMatchmakingMatchmakingSearchResource { 
    int32_t queueId;
    bool isCurrentlyInQueue;
    std::string lobbyId;
    LolMatchmakingMatchmakingSearchState searchState;
    float timeInQueue;
    float estimatedQueueTime;
    LolMatchmakingMatchmakingReadyCheckResource readyCheck;
    LolMatchmakingMatchmakingDodgeData dodgeData;
    LolMatchmakingMatchmakingLowPriorityData lowPriorityData;
    std::vector<LolMatchmakingMatchmakingSearchErrorResource> errors; 
  };
  inline void to_json(json& j, const LolMatchmakingMatchmakingSearchResource& v) {
    j["queueId"] = v.queueId; 
    j["isCurrentlyInQueue"] = v.isCurrentlyInQueue; 
    j["lobbyId"] = v.lobbyId; 
    j["searchState"] = v.searchState; 
    j["timeInQueue"] = v.timeInQueue; 
    j["estimatedQueueTime"] = v.estimatedQueueTime; 
    j["readyCheck"] = v.readyCheck; 
    j["dodgeData"] = v.dodgeData; 
    j["lowPriorityData"] = v.lowPriorityData; 
    j["errors"] = v.errors; 
  }
  inline void from_json(const json& j, LolMatchmakingMatchmakingSearchResource& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>(); 
    v.lobbyId = j.at("lobbyId").get<std::string>(); 
    v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState>(); 
    v.timeInQueue = j.at("timeInQueue").get<float>(); 
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>(); 
    v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource>(); 
    v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData>(); 
    v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData>(); 
    v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource>>(); 
  }
}
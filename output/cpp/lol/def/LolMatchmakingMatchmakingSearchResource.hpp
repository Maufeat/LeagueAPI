#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchmakingMatchmakingDodgeData.hpp>
#include <lol/def/LolMatchmakingMatchmakingLowPriorityData.hpp>
#include <lol/def/LolMatchmakingMatchmakingReadyCheckResource.hpp>
#include <lol/def/LolMatchmakingMatchmakingSearchState.hpp>
#include <lol/def/LolMatchmakingMatchmakingSearchErrorResource.hpp>
namespace lol {
  struct LolMatchmakingMatchmakingSearchResource { 
    std::string lobbyId;
    float estimatedQueueTime;
    float timeInQueue;
    bool isCurrentlyInQueue;
    LolMatchmakingMatchmakingSearchState searchState;
    LolMatchmakingMatchmakingReadyCheckResource readyCheck;
    LolMatchmakingMatchmakingLowPriorityData lowPriorityData;
    std::vector<LolMatchmakingMatchmakingSearchErrorResource> errors;
    int32_t queueId;
    LolMatchmakingMatchmakingDodgeData dodgeData; 
  };
  void to_json(json& j, const LolMatchmakingMatchmakingSearchResource& v) {
    j["lobbyId"] = v.lobbyId; 
    j["estimatedQueueTime"] = v.estimatedQueueTime; 
    j["timeInQueue"] = v.timeInQueue; 
    j["isCurrentlyInQueue"] = v.isCurrentlyInQueue; 
    j["searchState"] = v.searchState; 
    j["readyCheck"] = v.readyCheck; 
    j["lowPriorityData"] = v.lowPriorityData; 
    j["errors"] = v.errors; 
    j["queueId"] = v.queueId; 
    j["dodgeData"] = v.dodgeData; 
  }
  void from_json(const json& j, LolMatchmakingMatchmakingSearchResource& v) {
    v.lobbyId = j.at("lobbyId").get<std::string>(); 
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>(); 
    v.timeInQueue = j.at("timeInQueue").get<float>(); 
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>(); 
    v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState>(); 
    v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource>(); 
    v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData>(); 
    v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource>>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData>(); 
  }
}
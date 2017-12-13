#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchmakingMatchmakingDodgeData.hpp>
#include <lol/def/LolMatchmakingMatchmakingLowPriorityData.hpp>
#include <lol/def/LolMatchmakingMatchmakingSearchErrorResource.hpp>
#include <lol/def/LolMatchmakingMatchmakingSearchState.hpp>
#include <lol/def/LolMatchmakingMatchmakingReadyCheckResource.hpp>
namespace lol {
  struct LolMatchmakingMatchmakingSearchResource { 
    int32_t queueId;
    LolMatchmakingMatchmakingReadyCheckResource readyCheck;
    std::string lobbyId;
    LolMatchmakingMatchmakingLowPriorityData lowPriorityData;
    float timeInQueue;
    LolMatchmakingMatchmakingSearchState searchState;
    bool isCurrentlyInQueue;
    LolMatchmakingMatchmakingDodgeData dodgeData;
    std::vector<LolMatchmakingMatchmakingSearchErrorResource> errors;
    float estimatedQueueTime; 
  };
  void to_json(json& j, const LolMatchmakingMatchmakingSearchResource& v) {
  j["queueId"] = v.queueId; 
  j["readyCheck"] = v.readyCheck; 
  j["lobbyId"] = v.lobbyId; 
  j["lowPriorityData"] = v.lowPriorityData; 
  j["timeInQueue"] = v.timeInQueue; 
  j["searchState"] = v.searchState; 
  j["isCurrentlyInQueue"] = v.isCurrentlyInQueue; 
  j["dodgeData"] = v.dodgeData; 
  j["errors"] = v.errors; 
  j["estimatedQueueTime"] = v.estimatedQueueTime; 
  }
  void from_json(const json& j, LolMatchmakingMatchmakingSearchResource& v) {
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.readyCheck = j.at("readyCheck").get<LolMatchmakingMatchmakingReadyCheckResource>(); 
  v.lobbyId = j.at("lobbyId").get<std::string>(); 
  v.lowPriorityData = j.at("lowPriorityData").get<LolMatchmakingMatchmakingLowPriorityData>(); 
  v.timeInQueue = j.at("timeInQueue").get<float>(); 
  v.searchState = j.at("searchState").get<LolMatchmakingMatchmakingSearchState>(); 
  v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>(); 
  v.dodgeData = j.at("dodgeData").get<LolMatchmakingMatchmakingDodgeData>(); 
  v.errors = j.at("errors").get<std::vector<LolMatchmakingMatchmakingSearchErrorResource>>(); 
  v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderMatchmakingDodgeData.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchState.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp"
namespace lol {
  struct LolLobbyTeamBuilderMatchmakingSearchResource { 
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource> errors;
    LolLobbyTeamBuilderMatchmakingDodgeData dodgeData;
    std::string lobbyId;
    bool isCurrentlyInQueue;
    float timeInQueue;
    float estimatedQueueTime;
    LolLobbyTeamBuilderMatchmakingLowPriorityData lowPriorityData;
    LolLobbyTeamBuilderMatchmakingReadyCheckResource readyCheck;
    int32_t queueId;
    LolLobbyTeamBuilderMatchmakingSearchState searchState; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderMatchmakingSearchResource& v) {
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
  inline void from_json(const json& j, LolLobbyTeamBuilderMatchmakingSearchResource& v) {
    v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource>>(); 
    v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData>(); 
    v.lobbyId = j.at("lobbyId").get<std::string>(); 
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>(); 
    v.timeInQueue = j.at("timeInQueue").get<float>(); 
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>(); 
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData>(); 
    v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState>(); 
  }
}
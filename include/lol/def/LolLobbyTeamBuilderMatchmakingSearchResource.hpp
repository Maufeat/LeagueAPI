#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeData.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchState.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp"
namespace lol {
  struct LolLobbyTeamBuilderMatchmakingSearchResource { 
    LolLobbyTeamBuilderMatchmakingReadyCheckResource readyCheck;
    std::string lobbyId;
    int32_t queueId;
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource> errors;
    bool isCurrentlyInQueue;
    float timeInQueue;
    LolLobbyTeamBuilderMatchmakingLowPriorityData lowPriorityData;
    float estimatedQueueTime;
    LolLobbyTeamBuilderMatchmakingSearchState searchState;
    LolLobbyTeamBuilderMatchmakingDodgeData dodgeData; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderMatchmakingSearchResource& v) {
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
  inline void from_json(const json& j, LolLobbyTeamBuilderMatchmakingSearchResource& v) {
    v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource>(); 
    v.lobbyId = j.at("lobbyId").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource>>(); 
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>(); 
    v.timeInQueue = j.at("timeInQueue").get<float>(); 
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData>(); 
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>(); 
    v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState>(); 
    v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData>(); 
  }
}
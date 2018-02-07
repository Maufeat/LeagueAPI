#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeData.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchState.hpp"
#include "LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp"
namespace lol {
  struct LolLobbyTeamBuilderMatchmakingSearchResource { 
    int32_t queueId;
    bool isCurrentlyInQueue;
    std::string lobbyId;
    LolLobbyTeamBuilderMatchmakingSearchState searchState;
    float timeInQueue;
    float estimatedQueueTime;
    LolLobbyTeamBuilderMatchmakingReadyCheckResource readyCheck;
    LolLobbyTeamBuilderMatchmakingDodgeData dodgeData;
    LolLobbyTeamBuilderMatchmakingLowPriorityData lowPriorityData;
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource> errors; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderMatchmakingSearchResource& v) {
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
  inline void from_json(const json& j, LolLobbyTeamBuilderMatchmakingSearchResource& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>(); 
    v.lobbyId = j.at("lobbyId").get<std::string>(); 
    v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState>(); 
    v.timeInQueue = j.at("timeInQueue").get<float>(); 
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>(); 
    v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource>(); 
    v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData>(); 
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData>(); 
    v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource>>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderMatchmakingSearchState.hpp>
#include <lol/def/LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp>
#include <lol/def/LolLobbyTeamBuilderMatchmakingDodgeData.hpp>
#include <lol/def/LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp>
#include <lol/def/LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp>
namespace lol {
  struct LolLobbyTeamBuilderMatchmakingSearchResource { 
    std::string lobbyId;
    float estimatedQueueTime;
    float timeInQueue;
    bool isCurrentlyInQueue;
    LolLobbyTeamBuilderMatchmakingSearchState searchState;
    LolLobbyTeamBuilderMatchmakingReadyCheckResource readyCheck;
    LolLobbyTeamBuilderMatchmakingLowPriorityData lowPriorityData;
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource> errors;
    int32_t queueId;
    LolLobbyTeamBuilderMatchmakingDodgeData dodgeData; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderMatchmakingSearchResource& v) {
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
  void from_json(const json& j, LolLobbyTeamBuilderMatchmakingSearchResource& v) {
  v.lobbyId = j.at("lobbyId").get<std::string>(); 
  v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>(); 
  v.timeInQueue = j.at("timeInQueue").get<float>(); 
  v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>(); 
  v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState>(); 
  v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource>(); 
  v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData>(); 
  v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource>>(); 
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData>(); 
  }
}
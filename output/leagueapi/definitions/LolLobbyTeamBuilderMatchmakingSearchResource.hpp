#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyTeamBuilderMatchmakingSearchErrorResource.hpp>"
#include "<leagueapi/definitions/LolLobbyTeamBuilderMatchmakingLowPriorityData.hpp>"
#include "<leagueapi/definitions/LolLobbyTeamBuilderMatchmakingSearchState.hpp>"
#include "<leagueapi/definitions/LolLobbyTeamBuilderMatchmakingDodgeData.hpp>"
#include "<leagueapi/definitions/LolLobbyTeamBuilderMatchmakingReadyCheckResource.hpp>"

namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingSearchResource { /**/ 
    int32_t queueId;/**/
    LolLobbyTeamBuilderMatchmakingReadyCheckResource readyCheck;/**/
    std::string lobbyId;/**/
    LolLobbyTeamBuilderMatchmakingLowPriorityData lowPriorityData;/**/
    float timeInQueue;/**/
    LolLobbyTeamBuilderMatchmakingSearchState searchState;/**/
    bool isCurrentlyInQueue;/**/
    LolLobbyTeamBuilderMatchmakingDodgeData dodgeData;/**/
    std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource> errors;/**/
    float estimatedQueueTime;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderMatchmakingSearchResource& v) { 
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
  static void from_json(const json& j, LolLobbyTeamBuilderMatchmakingSearchResource& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.readyCheck = j.at("readyCheck").get<LolLobbyTeamBuilderMatchmakingReadyCheckResource>(); 
    v.lobbyId = j.at("lobbyId").get<std::string>(); 
    v.lowPriorityData = j.at("lowPriorityData").get<LolLobbyTeamBuilderMatchmakingLowPriorityData>(); 
    v.timeInQueue = j.at("timeInQueue").get<float>(); 
    v.searchState = j.at("searchState").get<LolLobbyTeamBuilderMatchmakingSearchState>(); 
    v.isCurrentlyInQueue = j.at("isCurrentlyInQueue").get<bool>(); 
    v.dodgeData = j.at("dodgeData").get<LolLobbyTeamBuilderMatchmakingDodgeData>(); 
    v.errors = j.at("errors").get<std::vector<LolLobbyTeamBuilderMatchmakingSearchErrorResource>>(); 
    v.estimatedQueueTime = j.at("estimatedQueueTime").get<float>(); 
  }
} 
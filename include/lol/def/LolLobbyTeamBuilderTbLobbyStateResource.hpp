#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderTBDMatchmakingState.hpp"
#include "LolLobbyTeamBuilderAfkCheckStateV1.hpp"
#include "LolLobbyTeamBuilderTbLobbyPremadeStateResource.hpp"
#include "LolLobbyTeamBuilderChampionSelectStateV1.hpp"
namespace lol {
  struct LolLobbyTeamBuilderTbLobbyStateResource { 
    int32_t counter;
    std::string phaseName;
    int32_t queueId;
    std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource> premadeState;
    std::optional<LolLobbyTeamBuilderTBDMatchmakingState> matchmakingState;
    std::optional<LolLobbyTeamBuilderAfkCheckStateV1> afkCheckState;
    std::optional<LolLobbyTeamBuilderChampionSelectStateV1> championSelectState; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTbLobbyStateResource& v) {
    j["counter"] = v.counter; 
    j["phaseName"] = v.phaseName; 
    j["queueId"] = v.queueId; 
    if(v.premadeState)
      j["premadeState"] = *v.premadeState;
    if(v.matchmakingState)
      j["matchmakingState"] = *v.matchmakingState;
    if(v.afkCheckState)
      j["afkCheckState"] = *v.afkCheckState;
    if(v.championSelectState)
      j["championSelectState"] = *v.championSelectState;
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTbLobbyStateResource& v) {
    v.counter = j.at("counter").get<int32_t>(); 
    v.phaseName = j.at("phaseName").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    if(auto it = j.find("premadeState"); it != j.end() && !it->is_null())
      v.premadeState = it->get<std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource>>(); 
    if(auto it = j.find("matchmakingState"); it != j.end() && !it->is_null())
      v.matchmakingState = it->get<std::optional<LolLobbyTeamBuilderTBDMatchmakingState>>(); 
    if(auto it = j.find("afkCheckState"); it != j.end() && !it->is_null())
      v.afkCheckState = it->get<std::optional<LolLobbyTeamBuilderAfkCheckStateV1>>(); 
    if(auto it = j.find("championSelectState"); it != j.end() && !it->is_null())
      v.championSelectState = it->get<std::optional<LolLobbyTeamBuilderChampionSelectStateV1>>(); 
  }
}
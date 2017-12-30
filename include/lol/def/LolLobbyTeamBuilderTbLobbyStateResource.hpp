#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderTbLobbyPremadeStateResource.hpp"
#include "LolLobbyTeamBuilderTBDMatchmakingState.hpp"
#include "LolLobbyTeamBuilderAfkCheckStateV1.hpp"
#include "LolLobbyTeamBuilderChampionSelectStateV1.hpp"
namespace lol {
  struct LolLobbyTeamBuilderTbLobbyStateResource { 
    std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource> premadeState;
    int32_t counter;
    std::optional<LolLobbyTeamBuilderChampionSelectStateV1> championSelectState;
    std::optional<LolLobbyTeamBuilderTBDMatchmakingState> matchmakingState;
    std::optional<LolLobbyTeamBuilderAfkCheckStateV1> afkCheckState;
    int32_t queueId;
    std::string phaseName; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTbLobbyStateResource& v) {
    if(v.premadeState)
      j["premadeState"] = *v.premadeState;
    j["counter"] = v.counter; 
    if(v.championSelectState)
      j["championSelectState"] = *v.championSelectState;
    if(v.matchmakingState)
      j["matchmakingState"] = *v.matchmakingState;
    if(v.afkCheckState)
      j["afkCheckState"] = *v.afkCheckState;
    j["queueId"] = v.queueId; 
    j["phaseName"] = v.phaseName; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTbLobbyStateResource& v) {
    if(auto it = j.find("premadeState"); it != j.end() && !it->is_null())
      v.premadeState = it->get<std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource>>(); 
    v.counter = j.at("counter").get<int32_t>(); 
    if(auto it = j.find("championSelectState"); it != j.end() && !it->is_null())
      v.championSelectState = it->get<std::optional<LolLobbyTeamBuilderChampionSelectStateV1>>(); 
    if(auto it = j.find("matchmakingState"); it != j.end() && !it->is_null())
      v.matchmakingState = it->get<std::optional<LolLobbyTeamBuilderTBDMatchmakingState>>(); 
    if(auto it = j.find("afkCheckState"); it != j.end() && !it->is_null())
      v.afkCheckState = it->get<std::optional<LolLobbyTeamBuilderAfkCheckStateV1>>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.phaseName = j.at("phaseName").get<std::string>(); 
  }
}
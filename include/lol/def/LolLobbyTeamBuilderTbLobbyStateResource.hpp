#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderTbLobbyPremadeStateResource.hpp"
#include "LolLobbyTeamBuilderAfkCheckStateV1.hpp"
#include "LolLobbyTeamBuilderChampionSelectStateV1.hpp"
#include "LolLobbyTeamBuilderTBDMatchmakingState.hpp"
namespace lol {
  struct LolLobbyTeamBuilderTbLobbyStateResource { 
    std::optional<LolLobbyTeamBuilderChampionSelectStateV1> championSelectState;
    std::string phaseName;
    std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource> premadeState;
    std::optional<LolLobbyTeamBuilderTBDMatchmakingState> matchmakingState;
    int32_t counter;
    std::optional<LolLobbyTeamBuilderAfkCheckStateV1> afkCheckState;
    int32_t queueId; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTbLobbyStateResource& v) {
    if(v.championSelectState)
      j["championSelectState"] = *v.championSelectState;
    j["phaseName"] = v.phaseName; 
    if(v.premadeState)
      j["premadeState"] = *v.premadeState;
    if(v.matchmakingState)
      j["matchmakingState"] = *v.matchmakingState;
    j["counter"] = v.counter; 
    if(v.afkCheckState)
      j["afkCheckState"] = *v.afkCheckState;
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTbLobbyStateResource& v) {
    if(auto it = j.find("championSelectState"); it != j.end() && !it->is_null())
      v.championSelectState = it->get<std::optional<LolLobbyTeamBuilderChampionSelectStateV1>>(); 
    v.phaseName = j.at("phaseName").get<std::string>(); 
    if(auto it = j.find("premadeState"); it != j.end() && !it->is_null())
      v.premadeState = it->get<std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource>>(); 
    if(auto it = j.find("matchmakingState"); it != j.end() && !it->is_null())
      v.matchmakingState = it->get<std::optional<LolLobbyTeamBuilderTBDMatchmakingState>>(); 
    v.counter = j.at("counter").get<int32_t>(); 
    if(auto it = j.find("afkCheckState"); it != j.end() && !it->is_null())
      v.afkCheckState = it->get<std::optional<LolLobbyTeamBuilderAfkCheckStateV1>>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}
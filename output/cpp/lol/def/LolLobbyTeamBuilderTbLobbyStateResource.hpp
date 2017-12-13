#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderTbLobbyPremadeStateResource.hpp>
#include <lol/def/LolLobbyTeamBuilderAfkCheckStateV1.hpp>
#include <lol/def/LolLobbyTeamBuilderChampionSelectStateV1.hpp>
#include <lol/def/LolLobbyTeamBuilderTBDMatchmakingState.hpp>
namespace lol {
  struct LolLobbyTeamBuilderTbLobbyStateResource { 
    std::optional<LolLobbyTeamBuilderTBDMatchmakingState> matchmakingState;
    int32_t counter;
    std::string phaseName;
    std::optional<LolLobbyTeamBuilderAfkCheckStateV1> afkCheckState;
    std::optional<LolLobbyTeamBuilderChampionSelectStateV1> championSelectState;
    int32_t queueId;
    std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource> premadeState; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderTbLobbyStateResource& v) {
    if(v.matchmakingState)
      j["matchmakingState"] = *v.matchmakingState;
    j["counter"] = v.counter; 
    j["phaseName"] = v.phaseName; 
    if(v.afkCheckState)
      j["afkCheckState"] = *v.afkCheckState;
    if(v.championSelectState)
      j["championSelectState"] = *v.championSelectState;
    j["queueId"] = v.queueId; 
    if(v.premadeState)
      j["premadeState"] = *v.premadeState;
  }
  void from_json(const json& j, LolLobbyTeamBuilderTbLobbyStateResource& v) {
    if(auto it = j.find("matchmakingState"); it != j.end() && !it->is_null())
      v.matchmakingState = it->get<std::optional<LolLobbyTeamBuilderTBDMatchmakingState>>(); 
    v.counter = j.at("counter").get<int32_t>(); 
    v.phaseName = j.at("phaseName").get<std::string>(); 
    if(auto it = j.find("afkCheckState"); it != j.end() && !it->is_null())
      v.afkCheckState = it->get<std::optional<LolLobbyTeamBuilderAfkCheckStateV1>>(); 
    if(auto it = j.find("championSelectState"); it != j.end() && !it->is_null())
      v.championSelectState = it->get<std::optional<LolLobbyTeamBuilderChampionSelectStateV1>>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    if(auto it = j.find("premadeState"); it != j.end() && !it->is_null())
      v.premadeState = it->get<std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource>>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderChampionSelectStateV1.hpp>
#include <lol/def/LolLobbyTeamBuilderTbLobbyPremadeStateResource.hpp>
#include <lol/def/LolLobbyTeamBuilderTBDMatchmakingState.hpp>
#include <lol/def/LolLobbyTeamBuilderAfkCheckStateV1.hpp>
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
  j["matchmakingState"] = v.matchmakingState; 
  j["counter"] = v.counter; 
  j["phaseName"] = v.phaseName; 
  j["afkCheckState"] = v.afkCheckState; 
  j["championSelectState"] = v.championSelectState; 
  j["queueId"] = v.queueId; 
  j["premadeState"] = v.premadeState; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderTbLobbyStateResource& v) {
  v.matchmakingState = j.at("matchmakingState").get<std::optional<LolLobbyTeamBuilderTBDMatchmakingState>>(); 
  v.counter = j.at("counter").get<int32_t>(); 
  v.phaseName = j.at("phaseName").get<std::string>(); 
  v.afkCheckState = j.at("afkCheckState").get<std::optional<LolLobbyTeamBuilderAfkCheckStateV1>>(); 
  v.championSelectState = j.at("championSelectState").get<std::optional<LolLobbyTeamBuilderChampionSelectStateV1>>(); 
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.premadeState = j.at("premadeState").get<std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource>>(); 
  }
}
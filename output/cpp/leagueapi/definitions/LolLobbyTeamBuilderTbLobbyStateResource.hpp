#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderChampionSelectStateV1.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderAfkCheckStateV1.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderTbLobbyPremadeStateResource.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderTBDMatchmakingState.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyStateResource { /**/ 
    int32_t queueId;/**/
    std::optional<LolLobbyTeamBuilderChampionSelectStateV1> championSelectState;/**/
    std::optional<LolLobbyTeamBuilderTBDMatchmakingState> matchmakingState;/**/
    std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource> premadeState;/**/
    int32_t counter;/**/
    std::optional<LolLobbyTeamBuilderAfkCheckStateV1> afkCheckState;/**/
    std::string phaseName;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderTbLobbyStateResource& v) { 
    j["queueId"] = v.queueId;
    j["championSelectState"] = v.championSelectState;
    j["matchmakingState"] = v.matchmakingState;
    j["premadeState"] = v.premadeState;
    j["counter"] = v.counter;
    j["afkCheckState"] = v.afkCheckState;
    j["phaseName"] = v.phaseName;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderTbLobbyStateResource& v) { 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.championSelectState = j.at("championSelectState").get<std::optional<LolLobbyTeamBuilderChampionSelectStateV1>>(); 
    v.matchmakingState = j.at("matchmakingState").get<std::optional<LolLobbyTeamBuilderTBDMatchmakingState>>(); 
    v.premadeState = j.at("premadeState").get<std::optional<LolLobbyTeamBuilderTbLobbyPremadeStateResource>>(); 
    v.counter = j.at("counter").get<int32_t>(); 
    v.afkCheckState = j.at("afkCheckState").get<std::optional<LolLobbyTeamBuilderAfkCheckStateV1>>(); 
    v.phaseName = j.at("phaseName").get<std::string>(); 
  }
} 
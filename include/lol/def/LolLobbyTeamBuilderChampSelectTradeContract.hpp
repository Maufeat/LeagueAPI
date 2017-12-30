#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderChampSelectTradeState.hpp"
namespace lol {
  struct LolLobbyTeamBuilderChampSelectTradeContract { 
    int64_t cellId;
    int64_t id;
    LolLobbyTeamBuilderChampSelectTradeState state; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampSelectTradeContract& v) {
    j["cellId"] = v.cellId; 
    j["id"] = v.id; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampSelectTradeContract& v) {
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.state = j.at("state").get<LolLobbyTeamBuilderChampSelectTradeState>(); 
  }
}
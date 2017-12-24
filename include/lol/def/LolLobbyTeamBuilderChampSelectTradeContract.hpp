#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderChampSelectTradeState.hpp"
namespace lol {
  struct LolLobbyTeamBuilderChampSelectTradeContract { 
    int64_t id;
    LolLobbyTeamBuilderChampSelectTradeState state;
    int64_t cellId; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampSelectTradeContract& v) {
    j["id"] = v.id; 
    j["state"] = v.state; 
    j["cellId"] = v.cellId; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampSelectTradeContract& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.state = j.at("state").get<LolLobbyTeamBuilderChampSelectTradeState>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
  }
}
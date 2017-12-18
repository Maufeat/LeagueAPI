#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderChampSelectTradeState.hpp>
namespace lol {
  struct LolLobbyTeamBuilderChampSelectTradeContract { 
    LolLobbyTeamBuilderChampSelectTradeState state;
    int64_t cellId;
    int64_t id; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderChampSelectTradeContract& v) {
    j["state"] = v.state; 
    j["cellId"] = v.cellId; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderChampSelectTradeContract& v) {
    v.state = j.at("state").get<LolLobbyTeamBuilderChampSelectTradeState>(); 
    v.cellId = j.at("cellId").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}
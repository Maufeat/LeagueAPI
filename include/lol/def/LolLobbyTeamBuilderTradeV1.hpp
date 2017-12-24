#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderTradeV1 { 
    int32_t id;
    std::string state;
    int32_t cellId; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTradeV1& v) {
    j["id"] = v.id; 
    j["state"] = v.state; 
    j["cellId"] = v.cellId; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTradeV1& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.state = j.at("state").get<std::string>(); 
    v.cellId = j.at("cellId").get<int32_t>(); 
  }
}
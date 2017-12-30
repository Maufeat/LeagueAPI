#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderTradeV1 { 
    int32_t cellId;
    int32_t id;
    std::string state; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTradeV1& v) {
    j["cellId"] = v.cellId; 
    j["id"] = v.id; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTradeV1& v) {
    v.cellId = j.at("cellId").get<int32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.state = j.at("state").get<std::string>(); 
  }
}
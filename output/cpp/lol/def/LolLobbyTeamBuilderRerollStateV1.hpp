#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderRerollStateV1 { 
    bool allowRerolling;
    uint32_t rerollsRemaining; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderRerollStateV1& v) {
  j["allowRerolling"] = v.allowRerolling; 
  j["rerollsRemaining"] = v.rerollsRemaining; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderRerollStateV1& v) {
  v.allowRerolling = j.at("allowRerolling").get<bool>(); 
  v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderRerollStateV1 { 
    uint32_t rerollsRemaining;
    bool allowRerolling; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderRerollStateV1& v) {
    j["rerollsRemaining"] = v.rerollsRemaining; 
    j["allowRerolling"] = v.allowRerolling; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderRerollStateV1& v) {
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
  }
}
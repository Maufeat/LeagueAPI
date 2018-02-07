#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyLobbyTimer { 
    bool enabled;
    int64_t countdown; 
  };
  inline void to_json(json& j, const LolLobbyLobbyTimer& v) {
    j["enabled"] = v.enabled; 
    j["countdown"] = v.countdown; 
  }
  inline void from_json(const json& j, LolLobbyLobbyTimer& v) {
    v.enabled = j.at("enabled").get<bool>(); 
    v.countdown = j.at("countdown").get<int64_t>(); 
  }
}
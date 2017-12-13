#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLobbyTimer { 
    int64_t countdown;
    bool enabled; 
  };
  void to_json(json& j, const LolLobbyLobbyTimer& v) {
    j["countdown"] = v.countdown; 
    j["enabled"] = v.enabled; 
  }
  void from_json(const json& j, LolLobbyLobbyTimer& v) {
    v.countdown = j.at("countdown").get<int64_t>(); 
    v.enabled = j.at("enabled").get<bool>(); 
  }
}
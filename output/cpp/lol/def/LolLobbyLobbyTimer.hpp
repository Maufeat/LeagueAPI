#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLobbyTimer { 
    bool enabled;
    int64_t countdown; 
  };
  void to_json(json& j, const LolLobbyLobbyTimer& v) {
  j["enabled"] = v.enabled; 
  j["countdown"] = v.countdown; 
  }
  void from_json(const json& j, LolLobbyLobbyTimer& v) {
  v.enabled = j.at("enabled").get<bool>(); 
  v.countdown = j.at("countdown").get<int64_t>(); 
  }
}
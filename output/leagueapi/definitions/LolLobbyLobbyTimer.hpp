#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyLobbyTimer { /**/ 
    bool enabled;/**/
    int64_t countdown;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyTimer& v) { 
    j["enabled"] = v.enabled;
    j["countdown"] = v.countdown;
  }
  static void from_json(const json& j, LolLobbyLobbyTimer& v) { 
    v.enabled = j.at("enabled").get<bool>(); 
    v.countdown = j.at("countdown").get<int64_t>(); 
  }
} 
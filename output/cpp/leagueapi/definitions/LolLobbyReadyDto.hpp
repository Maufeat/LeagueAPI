#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyReadyDto { /**/ 
    bool ready;/**/
  };
  static void to_json(json& j, const LolLobbyReadyDto& v) { 
    j["ready"] = v.ready;
  }
  static void from_json(const json& j, LolLobbyReadyDto& v) { 
    v.ready = j.at("ready").get<bool>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderRerollStateV1 { /**/ 
    bool allowRerolling;/**/
    uint32_t rerollsRemaining;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderRerollStateV1& v) { 
    j["allowRerolling"] = v.allowRerolling;
    j["rerollsRemaining"] = v.rerollsRemaining;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderRerollStateV1& v) { 
    v.allowRerolling = j.at("allowRerolling").get<bool>(); 
    v.rerollsRemaining = j.at("rerollsRemaining").get<uint32_t>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ChampSelectLcdsObfuscatedParticipant { /**/ 
    uint64_t gameUniqueId;/**/
  };
  static void to_json(json& j, const ChampSelectLcdsObfuscatedParticipant& v) { 
    j["gameUniqueId"] = v.gameUniqueId;
  }
  static void from_json(const json& j, ChampSelectLcdsObfuscatedParticipant& v) { 
    v.gameUniqueId = j.at("gameUniqueId").get<uint64_t>(); 
  }
} 
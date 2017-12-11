#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PlayerParticipant { /**/ 
    uint64_t summonerId;/**/
  };
  static void to_json(json& j, const PlayerParticipant& v) { 
    j["summonerId"] = v.summonerId;
  }
  static void from_json(const json& j, PlayerParticipant& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
} 
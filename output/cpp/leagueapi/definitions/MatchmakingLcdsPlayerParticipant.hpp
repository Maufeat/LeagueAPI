#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct MatchmakingLcdsPlayerParticipant { /**/ 
    uint64_t summonerId;/**/
  };
  static void to_json(json& j, const MatchmakingLcdsPlayerParticipant& v) { 
    j["summonerId"] = v.summonerId;
  }
  static void from_json(const json& j, MatchmakingLcdsPlayerParticipant& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
} 
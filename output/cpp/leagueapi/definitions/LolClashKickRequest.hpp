#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashKickRequest { /**/ 
    uint64_t summonerId;/**/
  };
  static void to_json(json& j, const LolClashKickRequest& v) { 
    j["summonerId"] = v.summonerId;
  }
  static void from_json(const json& j, LolClashKickRequest& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolClashLoginSessionState.hpp>"

namespace leagueapi {
  struct LolClashLoginSession { /**/ 
    LolClashLoginSessionState state;/**/
    std::optional<uint64_t> summonerId;/**/
  };
  static void to_json(json& j, const LolClashLoginSession& v) { 
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
  }
  static void from_json(const json& j, LolClashLoginSession& v) { 
    v.state = j.at("state").get<LolClashLoginSessionState>(); 
    v.summonerId = j.at("summonerId").get<std::optional<uint64_t>>(); 
  }
} 
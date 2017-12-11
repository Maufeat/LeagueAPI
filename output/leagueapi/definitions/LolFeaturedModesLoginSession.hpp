#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolFeaturedModesLoginSessionStates.hpp>"

namespace leagueapi {
  struct LolFeaturedModesLoginSession { /**/ 
    LolFeaturedModesLoginSessionStates state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolFeaturedModesLoginSession& v) { 
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolFeaturedModesLoginSession& v) { 
    v.state = j.at("state").get<LolFeaturedModesLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 
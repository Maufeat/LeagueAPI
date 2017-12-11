#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolHonorV2LoginSessionStates.hpp>"

namespace leagueapi {
  struct LolHonorV2LoginSession { /**/ 
    LolHonorV2LoginSessionStates state;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolHonorV2LoginSession& v) { 
    j["state"] = v.state;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolHonorV2LoginSession& v) { 
    v.state = j.at("state").get<LolHonorV2LoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 
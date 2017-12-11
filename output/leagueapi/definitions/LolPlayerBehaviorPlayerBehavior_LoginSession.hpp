#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPlayerBehaviorPlayerBehavior_LoginError.hpp>"
#include "<leagueapi/definitions/LolPlayerBehaviorPlayerBehavior_LoginSessionState.hpp>"

namespace leagueapi {
  struct LolPlayerBehaviorPlayerBehavior_LoginSession { /**/ 
    LolPlayerBehaviorPlayerBehavior_LoginSessionState state;/**/
    std::optional<LolPlayerBehaviorPlayerBehavior_LoginError> error;/**/
    uint64_t summonerId;/**/
    uint64_t accountId;/**/
  };
  static void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_LoginSession& v) { 
    j["state"] = v.state;
    j["error"] = v.error;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }
  static void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_LoginSession& v) { 
    v.state = j.at("state").get<LolPlayerBehaviorPlayerBehavior_LoginSessionState>(); 
    v.error = j.at("error").get<std::optional<LolPlayerBehaviorPlayerBehavior_LoginError>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
} 
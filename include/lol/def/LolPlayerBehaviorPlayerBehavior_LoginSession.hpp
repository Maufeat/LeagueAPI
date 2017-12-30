#pragma once
#include "../base_def.hpp" 
#include "LolPlayerBehaviorPlayerBehavior_LoginError.hpp"
#include "LolPlayerBehaviorPlayerBehavior_LoginSessionState.hpp"
namespace lol {
  struct LolPlayerBehaviorPlayerBehavior_LoginSession { 
    uint64_t accountId;
    uint64_t summonerId;
    std::optional<LolPlayerBehaviorPlayerBehavior_LoginError> error;
    LolPlayerBehaviorPlayerBehavior_LoginSessionState state; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_LoginSession& v) {
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    if(v.error)
      j["error"] = *v.error;
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_LoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    if(auto it = j.find("error"); it != j.end() && !it->is_null())
      v.error = it->get<std::optional<LolPlayerBehaviorPlayerBehavior_LoginError>>(); 
    v.state = j.at("state").get<LolPlayerBehaviorPlayerBehavior_LoginSessionState>(); 
  }
}
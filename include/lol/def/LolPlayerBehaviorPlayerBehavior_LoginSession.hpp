#pragma once
#include "../base_def.hpp" 
#include "LolPlayerBehaviorPlayerBehavior_LoginError.hpp"
#include "LolPlayerBehaviorPlayerBehavior_LoginSessionState.hpp"
namespace lol {
  struct LolPlayerBehaviorPlayerBehavior_LoginSession { 
    uint64_t summonerId;
    LolPlayerBehaviorPlayerBehavior_LoginSessionState state;
    std::optional<LolPlayerBehaviorPlayerBehavior_LoginError> error;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_LoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    if(v.error)
      j["error"] = *v.error;
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_LoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolPlayerBehaviorPlayerBehavior_LoginSessionState>(); 
    if(auto it = j.find("error"); it != j.end() && !it->is_null())
      v.error = it->get<std::optional<LolPlayerBehaviorPlayerBehavior_LoginError>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
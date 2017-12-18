#pragma once
#include "../base_def.hpp" 
#include "LolPlayerBehaviorPlayerBehavior_LoginError.hpp"
#include "LolPlayerBehaviorPlayerBehavior_LoginSessionState.hpp"
namespace lol {
  struct LolPlayerBehaviorPlayerBehavior_LoginSession { 
    LolPlayerBehaviorPlayerBehavior_LoginSessionState state;
    uint64_t accountId;
    std::optional<LolPlayerBehaviorPlayerBehavior_LoginError> error;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_LoginSession& v) {
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    if(v.error)
      j["error"] = *v.error;
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_LoginSession& v) {
    v.state = j.at("state").get<LolPlayerBehaviorPlayerBehavior_LoginSessionState>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    if(auto it = j.find("error"); it != j.end() && !it->is_null())
      v.error = it->get<std::optional<LolPlayerBehaviorPlayerBehavior_LoginError>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
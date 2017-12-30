#pragma once
#include "../base_def.hpp" 
#include "LolAccountVerificationLoginSessionState.hpp"
namespace lol {
  struct LolAccountVerificationLoginSession { 
    uint64_t accountId;
    uint64_t summonerId;
    LolAccountVerificationLoginSessionState state; 
  };
  inline void to_json(json& j, const LolAccountVerificationLoginSession& v) {
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolAccountVerificationLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolAccountVerificationLoginSessionState>(); 
  }
}
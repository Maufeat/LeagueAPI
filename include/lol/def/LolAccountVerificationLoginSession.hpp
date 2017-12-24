#pragma once
#include "../base_def.hpp" 
#include "LolAccountVerificationLoginSessionState.hpp"
namespace lol {
  struct LolAccountVerificationLoginSession { 
    uint64_t summonerId;
    LolAccountVerificationLoginSessionState state;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolAccountVerificationLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolAccountVerificationLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolAccountVerificationLoginSessionState>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
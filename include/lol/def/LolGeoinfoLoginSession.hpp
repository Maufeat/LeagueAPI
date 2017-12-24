#pragma once
#include "../base_def.hpp" 
#include "LolGeoinfoLoginSessionState.hpp"
namespace lol {
  struct LolGeoinfoLoginSession { 
    uint64_t summonerId;
    LolGeoinfoLoginSessionState state;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolGeoinfoLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolGeoinfoLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolGeoinfoLoginSessionState>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
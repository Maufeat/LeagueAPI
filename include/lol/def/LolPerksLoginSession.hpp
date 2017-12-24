#pragma once
#include "../base_def.hpp" 
#include "LolPerksLoginSessionState.hpp"
namespace lol {
  struct LolPerksLoginSession { 
    uint64_t summonerId;
    LolPerksLoginSessionState state;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolPerksLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolPerksLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolPerksLoginSessionState>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
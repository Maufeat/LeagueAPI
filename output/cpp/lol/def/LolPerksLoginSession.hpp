#pragma once
#include "../base_def.hpp" 
#include "LolPerksLoginSessionState.hpp"
namespace lol {
  struct LolPerksLoginSession { 
    LolPerksLoginSessionState state;
    uint64_t accountId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolPerksLoginSession& v) {
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolPerksLoginSession& v) {
    v.state = j.at("state").get<LolPerksLoginSessionState>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
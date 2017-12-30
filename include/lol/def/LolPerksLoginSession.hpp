#pragma once
#include "../base_def.hpp" 
#include "LolPerksLoginSessionState.hpp"
namespace lol {
  struct LolPerksLoginSession { 
    uint64_t accountId;
    uint64_t summonerId;
    LolPerksLoginSessionState state; 
  };
  inline void to_json(json& j, const LolPerksLoginSession& v) {
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolPerksLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolPerksLoginSessionState>(); 
  }
}
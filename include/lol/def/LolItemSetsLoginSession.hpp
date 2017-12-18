#pragma once
#include "../base_def.hpp" 
#include "LolItemSetsLoginSessionStates.hpp"
namespace lol {
  struct LolItemSetsLoginSession { 
    LolItemSetsLoginSessionStates state;
    uint64_t accountId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolItemSetsLoginSession& v) {
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolItemSetsLoginSession& v) {
    v.state = j.at("state").get<LolItemSetsLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
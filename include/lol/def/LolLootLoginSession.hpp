#pragma once
#include "../base_def.hpp" 
#include "LolLootLoginSessionStates.hpp"
namespace lol {
  struct LolLootLoginSession { 
    uint64_t summonerId;
    LolLootLoginSessionStates state;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolLootLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolLootLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolLootLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
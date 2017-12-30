#pragma once
#include "../base_def.hpp" 
#include "LolLootLoginSessionStates.hpp"
namespace lol {
  struct LolLootLoginSession { 
    uint64_t accountId;
    uint64_t summonerId;
    LolLootLoginSessionStates state; 
  };
  inline void to_json(json& j, const LolLootLoginSession& v) {
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolLootLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolLootLoginSessionStates>(); 
  }
}
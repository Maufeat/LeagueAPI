#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootLoginSessionStates.hpp>
namespace lol {
  struct LolLootLoginSession { 
    LolLootLoginSessionStates state;
    uint64_t accountId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolLootLoginSession& v) {
  j["state"] = v.state; 
  j["accountId"] = v.accountId; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolLootLoginSession& v) {
  v.state = j.at("state").get<LolLootLoginSessionStates>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
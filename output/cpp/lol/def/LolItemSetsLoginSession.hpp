#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolItemSetsLoginSessionStates.hpp>
namespace lol {
  struct LolItemSetsLoginSession { 
    LolItemSetsLoginSessionStates state;
    uint64_t accountId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolItemSetsLoginSession& v) {
  j["state"] = v.state; 
  j["accountId"] = v.accountId; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolItemSetsLoginSession& v) {
  v.state = j.at("state").get<LolItemSetsLoginSessionStates>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
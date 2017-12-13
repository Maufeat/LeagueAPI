#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryLoginSessionStates.hpp>
namespace lol {
  struct LolMatchHistoryLoginSession { 
    LolMatchHistoryLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolMatchHistoryLoginSession& v) {
  j["state"] = v.state; 
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolMatchHistoryLoginSession& v) {
  v.state = j.at("state").get<LolMatchHistoryLoginSessionStates>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
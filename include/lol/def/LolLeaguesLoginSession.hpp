#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesLoginSessionStates.hpp"
namespace lol {
  struct LolLeaguesLoginSession { 
    uint64_t accountId;
    uint64_t summonerId;
    LolLeaguesLoginSessionStates state; 
  };
  inline void to_json(json& j, const LolLeaguesLoginSession& v) {
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolLeaguesLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolLeaguesLoginSessionStates>(); 
  }
}
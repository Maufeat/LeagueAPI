#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesLoginSessionStates.hpp>
namespace lol {
  struct LolLeaguesLoginSession { 
    LolLeaguesLoginSessionStates state;
    uint64_t accountId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolLeaguesLoginSession& v) {
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolLeaguesLoginSession& v) {
    v.state = j.at("state").get<LolLeaguesLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
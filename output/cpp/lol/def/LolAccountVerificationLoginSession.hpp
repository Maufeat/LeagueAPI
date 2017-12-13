#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolAccountVerificationLoginSessionState.hpp>
namespace lol {
  struct LolAccountVerificationLoginSession { 
    LolAccountVerificationLoginSessionState state;
    uint64_t summonerId;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolAccountVerificationLoginSession& v) {
  j["state"] = v.state; 
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolAccountVerificationLoginSession& v) {
  v.state = j.at("state").get<LolAccountVerificationLoginSessionState>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
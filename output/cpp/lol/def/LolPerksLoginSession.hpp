#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPerksLoginSessionState.hpp>
namespace lol {
  struct LolPerksLoginSession { 
    LolPerksLoginSessionState state;
    uint64_t accountId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolPerksLoginSession& v) {
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolPerksLoginSession& v) {
    v.state = j.at("state").get<LolPerksLoginSessionState>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
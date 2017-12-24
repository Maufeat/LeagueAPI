#pragma once
#include "../base_def.hpp" 
#include "LolFeaturedModesLoginSessionStates.hpp"
namespace lol {
  struct LolFeaturedModesLoginSession { 
    uint64_t summonerId;
    LolFeaturedModesLoginSessionStates state;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolFeaturedModesLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolFeaturedModesLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolFeaturedModesLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
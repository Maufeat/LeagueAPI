#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2LoginSessionStates.hpp"
namespace lol {
  struct LolHonorV2LoginSession { 
    LolHonorV2LoginSessionStates state;
    uint64_t accountId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolHonorV2LoginSession& v) {
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolHonorV2LoginSession& v) {
    v.state = j.at("state").get<LolHonorV2LoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
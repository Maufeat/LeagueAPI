#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2LoginSessionStates.hpp"
namespace lol {
  struct LolHonorV2LoginSession { 
    LolHonorV2LoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolHonorV2LoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolHonorV2LoginSession& v) {
    v.state = j.at("state").get<LolHonorV2LoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
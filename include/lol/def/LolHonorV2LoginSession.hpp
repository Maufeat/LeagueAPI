#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2LoginSessionStates.hpp"
namespace lol {
  struct LolHonorV2LoginSession { 
    uint64_t summonerId;
    LolHonorV2LoginSessionStates state;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolHonorV2LoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolHonorV2LoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolHonorV2LoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
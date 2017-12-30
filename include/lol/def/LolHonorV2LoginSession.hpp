#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2LoginSessionStates.hpp"
namespace lol {
  struct LolHonorV2LoginSession { 
    uint64_t accountId;
    uint64_t summonerId;
    LolHonorV2LoginSessionStates state; 
  };
  inline void to_json(json& j, const LolHonorV2LoginSession& v) {
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolHonorV2LoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolHonorV2LoginSessionStates>(); 
  }
}
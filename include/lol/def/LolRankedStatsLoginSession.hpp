#pragma once
#include "../base_def.hpp" 
#include "LolRankedStatsLoginSessionStates.hpp"
namespace lol {
  struct LolRankedStatsLoginSession { 
    LolRankedStatsLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolRankedStatsLoginSession& v) {
    j["state"] = v.state; 
    j["summonerId"] = v.summonerId; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolRankedStatsLoginSession& v) {
    v.state = j.at("state").get<LolRankedStatsLoginSessionStates>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
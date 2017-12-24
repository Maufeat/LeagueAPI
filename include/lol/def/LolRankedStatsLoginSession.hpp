#pragma once
#include "../base_def.hpp" 
#include "LolRankedStatsLoginSessionStates.hpp"
namespace lol {
  struct LolRankedStatsLoginSession { 
    uint64_t summonerId;
    LolRankedStatsLoginSessionStates state;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolRankedStatsLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolRankedStatsLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolRankedStatsLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
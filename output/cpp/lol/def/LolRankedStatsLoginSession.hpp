#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolRankedStatsLoginSessionStates.hpp>
namespace lol {
  struct LolRankedStatsLoginSession { 
    LolRankedStatsLoginSessionStates state;
    uint64_t accountId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolRankedStatsLoginSession& v) {
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolRankedStatsLoginSession& v) {
    v.state = j.at("state").get<LolRankedStatsLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
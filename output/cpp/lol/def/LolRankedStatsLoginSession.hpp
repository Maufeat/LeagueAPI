#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolRankedStatsLoginSessionStates.hpp>
namespace lol {
  struct LolRankedStatsLoginSession { 
    LolRankedStatsLoginSessionStates state;
    uint64_t summonerId;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolRankedStatsLoginSession& v) {
  j["state"] = v.state; 
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolRankedStatsLoginSession& v) {
  v.state = j.at("state").get<LolRankedStatsLoginSessionStates>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
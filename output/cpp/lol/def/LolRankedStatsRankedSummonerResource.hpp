#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolRankedStatsRankedSummonerResource { 
    uint64_t accountId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolRankedStatsRankedSummonerResource& v) {
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolRankedStatsRankedSummonerResource& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
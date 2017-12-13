#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolRankedStatsRankedSummonerResource { 
    uint64_t summonerId;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolRankedStatsRankedSummonerResource& v) {
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolRankedStatsRankedSummonerResource& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}
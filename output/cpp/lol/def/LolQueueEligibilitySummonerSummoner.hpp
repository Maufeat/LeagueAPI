#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolQueueEligibilitySummonerSummoner { 
    uint32_t summonerLevel;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolQueueEligibilitySummonerSummoner& v) {
    j["summonerLevel"] = v.summonerLevel; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolQueueEligibilitySummonerSummoner& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolQueueEligibilitySummonerSummoner { 
    uint64_t summonerId;
    uint32_t summonerLevel; 
  };
  void to_json(json& j, const LolQueueEligibilitySummonerSummoner& v) {
  j["summonerId"] = v.summonerId; 
  j["summonerLevel"] = v.summonerLevel; 
  }
  void from_json(const json& j, LolQueueEligibilitySummonerSummoner& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}
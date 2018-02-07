#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolQueueEligibilitySummonerSummoner { 
    uint64_t summonerId;
    uint32_t summonerLevel; 
  };
  inline void to_json(json& j, const LolQueueEligibilitySummonerSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerLevel"] = v.summonerLevel; 
  }
  inline void from_json(const json& j, LolQueueEligibilitySummonerSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}
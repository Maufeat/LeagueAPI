#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEndOfGameLoginSummonerLevelAndPoints { 
    uint64_t expPoints;
    uint32_t summonerLevel; 
  };
  void to_json(json& j, const LolEndOfGameLoginSummonerLevelAndPoints& v) {
    j["expPoints"] = v.expPoints; 
    j["summonerLevel"] = v.summonerLevel; 
  }
  void from_json(const json& j, LolEndOfGameLoginSummonerLevelAndPoints& v) {
    v.expPoints = j.at("expPoints").get<uint64_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}
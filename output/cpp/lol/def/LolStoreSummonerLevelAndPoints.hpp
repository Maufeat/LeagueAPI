#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolStoreSummonerLevelAndPoints { 
    uint32_t summonerLevel; 
  };
  void to_json(json& j, const LolStoreSummonerLevelAndPoints& v) {
    j["summonerLevel"] = v.summonerLevel; 
  }
  void from_json(const json& j, LolStoreSummonerLevelAndPoints& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}
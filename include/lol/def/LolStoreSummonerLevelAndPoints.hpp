#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreSummonerLevelAndPoints { 
    uint32_t summonerLevel; 
  };
  inline void to_json(json& j, const LolStoreSummonerLevelAndPoints& v) {
    j["summonerLevel"] = v.summonerLevel; 
  }
  inline void from_json(const json& j, LolStoreSummonerLevelAndPoints& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginSummonerCreatedResource { 
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolLoginSummonerCreatedResource& v) {
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolLoginSummonerCreatedResource& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
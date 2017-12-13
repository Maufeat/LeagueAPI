#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSummonerSummonerCreatedId { 
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolSummonerSummonerCreatedId& v) {
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolSummonerSummonerCreatedId& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}
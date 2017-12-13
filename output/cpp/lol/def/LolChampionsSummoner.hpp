#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampionsSummoner { 
    uint32_t summonerLevel; 
  };
  void to_json(json& j, const LolChampionsSummoner& v) {
    j["summonerLevel"] = v.summonerLevel; 
  }
  void from_json(const json& j, LolChampionsSummoner& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}
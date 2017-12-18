#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampSelectLegacySummoner { 
    uint32_t summonerLevel; 
  };
  inline void to_json(json& j, const LolChampSelectLegacySummoner& v) {
    j["summonerLevel"] = v.summonerLevel; 
  }
  inline void from_json(const json& j, LolChampSelectLegacySummoner& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}
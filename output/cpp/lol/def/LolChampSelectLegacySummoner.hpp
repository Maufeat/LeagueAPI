#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampSelectLegacySummoner { 
    uint32_t summonerLevel; 
  };
  void to_json(json& j, const LolChampSelectLegacySummoner& v) {
  j["summonerLevel"] = v.summonerLevel; 
  }
  void from_json(const json& j, LolChampSelectLegacySummoner& v) {
  v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
}
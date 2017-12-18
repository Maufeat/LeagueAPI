#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LCDSChampionReward { 
    std::vector<int32_t> skins;
    int32_t championId; 
  };
  inline void to_json(json& j, const LCDSChampionReward& v) {
    j["skins"] = v.skins; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LCDSChampionReward& v) {
    v.skins = j.at("skins").get<std::vector<int32_t>>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}
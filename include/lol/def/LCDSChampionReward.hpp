#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LCDSChampionReward { 
    int32_t championId;
    std::vector<int32_t> skins; 
  };
  inline void to_json(json& j, const LCDSChampionReward& v) {
    j["championId"] = v.championId; 
    j["skins"] = v.skins; 
  }
  inline void from_json(const json& j, LCDSChampionReward& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.skins = j.at("skins").get<std::vector<int32_t>>(); 
  }
}
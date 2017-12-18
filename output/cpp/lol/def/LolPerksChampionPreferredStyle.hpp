#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksChampionPreferredStyle { 
    std::string championName;
    int32_t style;
    uint32_t championId; 
  };
  inline void to_json(json& j, const LolPerksChampionPreferredStyle& v) {
    j["championName"] = v.championName; 
    j["style"] = v.style; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LolPerksChampionPreferredStyle& v) {
    v.championName = j.at("championName").get<std::string>(); 
    v.style = j.at("style").get<int32_t>(); 
    v.championId = j.at("championId").get<uint32_t>(); 
  }
}
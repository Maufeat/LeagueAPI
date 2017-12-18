#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsAcsChampionGames { 
    int32_t championId;
    int32_t queue; 
  };
  inline void to_json(json& j, const LolCollectionsAcsChampionGames& v) {
    j["championId"] = v.championId; 
    j["queue"] = v.queue; 
  }
  inline void from_json(const json& j, LolCollectionsAcsChampionGames& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.queue = j.at("queue").get<int32_t>(); 
  }
}
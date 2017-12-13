#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsAcsChampionGames { 
    int32_t queue;
    int32_t championId; 
  };
  void to_json(json& j, const LolCollectionsAcsChampionGames& v) {
  j["queue"] = v.queue; 
  j["championId"] = v.championId; 
  }
  void from_json(const json& j, LolCollectionsAcsChampionGames& v) {
  v.queue = j.at("queue").get<int32_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolAcsAcsChampionGames { 
    int32_t championId;
    int32_t queue;
    std::string lane;
    std::string role; 
  };
  inline void to_json(json& j, const LolAcsAcsChampionGames& v) {
    j["championId"] = v.championId; 
    j["queue"] = v.queue; 
    j["lane"] = v.lane; 
    j["role"] = v.role; 
  }
  inline void from_json(const json& j, LolAcsAcsChampionGames& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.queue = j.at("queue").get<int32_t>(); 
    v.lane = j.at("lane").get<std::string>(); 
    v.role = j.at("role").get<std::string>(); 
  }
}
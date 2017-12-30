#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolAcsAcsChampionGames { 
    std::string lane;
    int32_t championId;
    int32_t queue;
    std::string role; 
  };
  inline void to_json(json& j, const LolAcsAcsChampionGames& v) {
    j["lane"] = v.lane; 
    j["championId"] = v.championId; 
    j["queue"] = v.queue; 
    j["role"] = v.role; 
  }
  inline void from_json(const json& j, LolAcsAcsChampionGames& v) {
    v.lane = j.at("lane").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.queue = j.at("queue").get<int32_t>(); 
    v.role = j.at("role").get<std::string>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "LolAcsAcsChampionGames.hpp"
namespace lol {
  struct LolAcsAcsChampionGamesCollection { 
    uint32_t gameCount;
    std::vector<LolAcsAcsChampionGames> champions; 
  };
  inline void to_json(json& j, const LolAcsAcsChampionGamesCollection& v) {
    j["gameCount"] = v.gameCount; 
    j["champions"] = v.champions; 
  }
  inline void from_json(const json& j, LolAcsAcsChampionGamesCollection& v) {
    v.gameCount = j.at("gameCount").get<uint32_t>(); 
    v.champions = j.at("champions").get<std::vector<LolAcsAcsChampionGames>>(); 
  }
}
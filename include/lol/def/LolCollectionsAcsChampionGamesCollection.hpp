#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsAcsChampionGames.hpp"
namespace lol {
  struct LolCollectionsAcsChampionGamesCollection { 
    uint32_t gameCount;
    std::vector<LolCollectionsAcsChampionGames> champions; 
  };
  inline void to_json(json& j, const LolCollectionsAcsChampionGamesCollection& v) {
    j["gameCount"] = v.gameCount; 
    j["champions"] = v.champions; 
  }
  inline void from_json(const json& j, LolCollectionsAcsChampionGamesCollection& v) {
    v.gameCount = j.at("gameCount").get<uint32_t>(); 
    v.champions = j.at("champions").get<std::vector<LolCollectionsAcsChampionGames>>(); 
  }
}
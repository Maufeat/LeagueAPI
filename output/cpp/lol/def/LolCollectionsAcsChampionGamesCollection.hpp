#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsAcsChampionGames.hpp>
namespace lol {
  struct LolCollectionsAcsChampionGamesCollection { 
    std::vector<LolCollectionsAcsChampionGames> champions;
    uint32_t gameCount; 
  };
  void to_json(json& j, const LolCollectionsAcsChampionGamesCollection& v) {
  j["champions"] = v.champions; 
  j["gameCount"] = v.gameCount; 
  }
  void from_json(const json& j, LolCollectionsAcsChampionGamesCollection& v) {
  v.champions = j.at("champions").get<std::vector<LolCollectionsAcsChampionGames>>(); 
  v.gameCount = j.at("gameCount").get<uint32_t>(); 
  }
}
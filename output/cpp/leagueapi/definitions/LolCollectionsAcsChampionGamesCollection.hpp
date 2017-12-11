#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolCollectionsAcsChampionGames.hpp>

namespace leagueapi {
  struct LolCollectionsAcsChampionGamesCollection { /**/ 
    std::vector<LolCollectionsAcsChampionGames> champions;/**/
    uint32_t gameCount;/**/
  };
  static void to_json(json& j, const LolCollectionsAcsChampionGamesCollection& v) { 
    j["champions"] = v.champions;
    j["gameCount"] = v.gameCount;
  }
  static void from_json(const json& j, LolCollectionsAcsChampionGamesCollection& v) { 
    v.champions = j.at("champions").get<std::vector<LolCollectionsAcsChampionGames>>(); 
    v.gameCount = j.at("gameCount").get<uint32_t>(); 
  }
} 
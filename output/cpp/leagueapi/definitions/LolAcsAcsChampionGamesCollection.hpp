#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolAcsAcsChampionGames.hpp>

namespace leagueapi {
  struct LolAcsAcsChampionGamesCollection { /**/ 
    std::vector<LolAcsAcsChampionGames> champions;/**/
    uint32_t gameCount;/**/
  };
  static void to_json(json& j, const LolAcsAcsChampionGamesCollection& v) { 
    j["champions"] = v.champions;
    j["gameCount"] = v.gameCount;
  }
  static void from_json(const json& j, LolAcsAcsChampionGamesCollection& v) { 
    v.champions = j.at("champions").get<std::vector<LolAcsAcsChampionGames>>(); 
    v.gameCount = j.at("gameCount").get<uint32_t>(); 
  }
} 
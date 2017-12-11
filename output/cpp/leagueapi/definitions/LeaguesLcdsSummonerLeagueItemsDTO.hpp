#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LeaguesLcdsLeagueItemDTO.hpp>

namespace leagueapi {
  struct LeaguesLcdsSummonerLeagueItemsDTO { /**/ 
    std::vector<LeaguesLcdsLeagueItemDTO> summonerLeagues;/**/
  };
  static void to_json(json& j, const LeaguesLcdsSummonerLeagueItemsDTO& v) { 
    j["summonerLeagues"] = v.summonerLeagues;
  }
  static void from_json(const json& j, LeaguesLcdsSummonerLeagueItemsDTO& v) { 
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<LeaguesLcdsLeagueItemDTO>>(); 
  }
} 
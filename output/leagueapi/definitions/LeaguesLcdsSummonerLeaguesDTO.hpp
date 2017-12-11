#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LeaguesLcdsSummonerLeagueListDTO.hpp>"

namespace leagueapi {
  struct LeaguesLcdsSummonerLeaguesDTO { /**/ 
    std::vector<LeaguesLcdsSummonerLeagueListDTO> summonerLeagues;/**/
  };
  static void to_json(json& j, const LeaguesLcdsSummonerLeaguesDTO& v) { 
    j["summonerLeagues"] = v.summonerLeagues;
  }
  static void from_json(const json& j, LeaguesLcdsSummonerLeaguesDTO& v) { 
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<LeaguesLcdsSummonerLeagueListDTO>>(); 
  }
} 
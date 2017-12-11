#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/RankedLeagueListDTO.hpp>

namespace leagueapi {
  struct RankedSummonerLeaguesDTO { /**/ 
    std::vector<RankedLeagueListDTO> summonerLeagues;/**/
  };
  static void to_json(json& j, const RankedSummonerLeaguesDTO& v) { 
    j["summonerLeagues"] = v.summonerLeagues;
  }
  static void from_json(const json& j, RankedSummonerLeaguesDTO& v) { 
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<RankedLeagueListDTO>>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/RankedLeagueItemDTO.hpp>"

namespace leagueapi {
  struct RankedSummonerLeagueItemsDTO { /**/ 
    std::vector<RankedLeagueItemDTO> summonerLeagues;/**/
  };
  static void to_json(json& j, const RankedSummonerLeagueItemsDTO& v) { 
    j["summonerLeagues"] = v.summonerLeagues;
  }
  static void from_json(const json& j, RankedSummonerLeagueItemsDTO& v) { 
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<RankedLeagueItemDTO>>(); 
  }
} 
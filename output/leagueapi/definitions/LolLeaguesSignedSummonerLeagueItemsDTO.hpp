#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLeaguesSignedLeagueItemDTO.hpp>"

namespace leagueapi {
  struct LolLeaguesSignedSummonerLeagueItemsDTO { /**/ 
    std::vector<LolLeaguesSignedLeagueItemDTO> summonerLeagues;/**/
  };
  static void to_json(json& j, const LolLeaguesSignedSummonerLeagueItemsDTO& v) { 
    j["summonerLeagues"] = v.summonerLeagues;
  }
  static void from_json(const json& j, LolLeaguesSignedSummonerLeagueItemsDTO& v) { 
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<LolLeaguesSignedLeagueItemDTO>>(); 
  }
} 
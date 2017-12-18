#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsLeagueItemDTO.hpp>
namespace lol {
  struct LeaguesLcdsSummonerLeagueItemsDTO { 
    std::vector<LeaguesLcdsLeagueItemDTO> summonerLeagues; 
  };
  inline void to_json(json& j, const LeaguesLcdsSummonerLeagueItemsDTO& v) {
    j["summonerLeagues"] = v.summonerLeagues; 
  }
  inline void from_json(const json& j, LeaguesLcdsSummonerLeagueItemsDTO& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<LeaguesLcdsLeagueItemDTO>>(); 
  }
}
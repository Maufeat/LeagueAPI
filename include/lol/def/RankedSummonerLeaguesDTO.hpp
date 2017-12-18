#pragma once
#include "../base_def.hpp" 
#include "RankedLeagueListDTO.hpp"
namespace lol {
  struct RankedSummonerLeaguesDTO { 
    std::vector<RankedLeagueListDTO> summonerLeagues; 
  };
  inline void to_json(json& j, const RankedSummonerLeaguesDTO& v) {
    j["summonerLeagues"] = v.summonerLeagues; 
  }
  inline void from_json(const json& j, RankedSummonerLeaguesDTO& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<RankedLeagueListDTO>>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "RankedLeagueItemDTO.hpp"
namespace lol {
  struct RankedSummonerLeagueItemsDTO { 
    std::vector<RankedLeagueItemDTO> summonerLeagues; 
  };
  inline void to_json(json& j, const RankedSummonerLeagueItemsDTO& v) {
    j["summonerLeagues"] = v.summonerLeagues; 
  }
  inline void from_json(const json& j, RankedSummonerLeagueItemsDTO& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<RankedLeagueItemDTO>>(); 
  }
}
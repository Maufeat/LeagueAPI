#pragma once
#include "../base_def.hpp" 
#include "LolLeaguesSignedLeagueItemDTO.hpp"
namespace lol {
  struct LolLeaguesSignedSummonerLeagueItemsDTO { 
    std::vector<LolLeaguesSignedLeagueItemDTO> summonerLeagues; 
  };
  inline void to_json(json& j, const LolLeaguesSignedSummonerLeagueItemsDTO& v) {
    j["summonerLeagues"] = v.summonerLeagues; 
  }
  inline void from_json(const json& j, LolLeaguesSignedSummonerLeagueItemsDTO& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<LolLeaguesSignedLeagueItemDTO>>(); 
  }
}
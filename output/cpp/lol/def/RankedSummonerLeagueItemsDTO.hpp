#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RankedLeagueItemDTO.hpp>
namespace lol {
  struct RankedSummonerLeagueItemsDTO { 
    std::vector<RankedLeagueItemDTO> summonerLeagues; 
  };
  void to_json(json& j, const RankedSummonerLeagueItemsDTO& v) {
  j["summonerLeagues"] = v.summonerLeagues; 
  }
  void from_json(const json& j, RankedSummonerLeagueItemsDTO& v) {
  v.summonerLeagues = j.at("summonerLeagues").get<std::vector<RankedLeagueItemDTO>>(); 
  }
}
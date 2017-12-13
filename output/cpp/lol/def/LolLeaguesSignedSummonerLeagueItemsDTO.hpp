#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesSignedLeagueItemDTO.hpp>
namespace lol {
  struct LolLeaguesSignedSummonerLeagueItemsDTO { 
    std::vector<LolLeaguesSignedLeagueItemDTO> summonerLeagues; 
  };
  void to_json(json& j, const LolLeaguesSignedSummonerLeagueItemsDTO& v) {
    j["summonerLeagues"] = v.summonerLeagues; 
  }
  void from_json(const json& j, LolLeaguesSignedSummonerLeagueItemsDTO& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<LolLeaguesSignedLeagueItemDTO>>(); 
  }
}
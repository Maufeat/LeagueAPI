#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesLeagueRank.hpp>
#include <lol/def/LolLeaguesLeagueStanding.hpp>
namespace lol {
  struct LolLeaguesLeagueDivision { 
    std::vector<LolLeaguesLeagueStanding> standings;
    LolLeaguesLeagueRank leagueRank; 
  };
  void to_json(json& j, const LolLeaguesLeagueDivision& v) {
  j["standings"] = v.standings; 
  j["leagueRank"] = v.leagueRank; 
  }
  void from_json(const json& j, LolLeaguesLeagueDivision& v) {
  v.standings = j.at("standings").get<std::vector<LolLeaguesLeagueStanding>>(); 
  v.leagueRank = j.at("leagueRank").get<LolLeaguesLeagueRank>(); 
  }
}
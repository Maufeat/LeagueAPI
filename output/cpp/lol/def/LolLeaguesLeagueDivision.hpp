#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLeaguesLeagueStanding.hpp>
#include <lol/def/LolLeaguesLeagueRank.hpp>
namespace lol {
  struct LolLeaguesLeagueDivision { 
    LolLeaguesLeagueRank leagueRank;
    std::vector<LolLeaguesLeagueStanding> standings; 
  };
  inline void to_json(json& j, const LolLeaguesLeagueDivision& v) {
    j["leagueRank"] = v.leagueRank; 
    j["standings"] = v.standings; 
  }
  inline void from_json(const json& j, LolLeaguesLeagueDivision& v) {
    v.leagueRank = j.at("leagueRank").get<LolLeaguesLeagueRank>(); 
    v.standings = j.at("standings").get<std::vector<LolLeaguesLeagueStanding>>(); 
  }
}
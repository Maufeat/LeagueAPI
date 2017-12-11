#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLeaguesLeagueStanding.hpp>"
#include "<leagueapi/definitions/LolLeaguesLeagueRank.hpp>"

namespace leagueapi {
  struct LolLeaguesLeagueDivision { /**/ 
    std::vector<LolLeaguesLeagueStanding> standings;/**/
    LolLeaguesLeagueRank leagueRank;/**/
  };
  static void to_json(json& j, const LolLeaguesLeagueDivision& v) { 
    j["standings"] = v.standings;
    j["leagueRank"] = v.leagueRank;
  }
  static void from_json(const json& j, LolLeaguesLeagueDivision& v) { 
    v.standings = j.at("standings").get<std::vector<LolLeaguesLeagueStanding>>(); 
    v.leagueRank = j.at("leagueRank").get<LolLeaguesLeagueRank>(); 
  }
} 
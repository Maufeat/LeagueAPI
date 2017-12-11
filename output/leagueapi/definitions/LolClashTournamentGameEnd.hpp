#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashTournamentGameEnd { /**/ 
    int64_t bracketId;/**/
    int64_t tournamentId;/**/
  };
  static void to_json(json& j, const LolClashTournamentGameEnd& v) { 
    j["bracketId"] = v.bracketId;
    j["tournamentId"] = v.tournamentId;
  }
  static void from_json(const json& j, LolClashTournamentGameEnd& v) { 
    v.bracketId = j.at("bracketId").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
  }
} 
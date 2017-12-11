#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/TournamentInfoDTO.hpp>

namespace leagueapi {
  struct TournamentInfoMinimalDTO { /**/ 
    std::vector<TournamentInfoDTO> tournamentInfo;/**/
    int64_t time;/**/
  };
  static void to_json(json& j, const TournamentInfoMinimalDTO& v) { 
    j["tournamentInfo"] = v.tournamentInfo;
    j["time"] = v.time;
  }
  static void from_json(const json& j, TournamentInfoMinimalDTO& v) { 
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO>>(); 
    v.time = j.at("time").get<int64_t>(); 
  }
} 
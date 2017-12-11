#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/RosterStatsDTO.hpp>"
#include "<leagueapi/definitions/TournamentInfoDTO.hpp>"
#include "<leagueapi/definitions/PlayerDTO.hpp>"
#include "<leagueapi/definitions/ThemeVp.hpp>"

namespace leagueapi {
  struct TournamentPlayerInfoDTO { /**/ 
    int32_t seasonVp;/**/
    std::vector<ThemeVp> themeVps;/**/
    std::vector<TournamentInfoDTO> tournamentInfo;/**/
    std::vector<RosterStatsDTO> rosterStats;/**/
    PlayerDTO player;/**/
    int64_t time;/**/
  };
  static void to_json(json& j, const TournamentPlayerInfoDTO& v) { 
    j["seasonVp"] = v.seasonVp;
    j["themeVps"] = v.themeVps;
    j["tournamentInfo"] = v.tournamentInfo;
    j["rosterStats"] = v.rosterStats;
    j["player"] = v.player;
    j["time"] = v.time;
  }
  static void from_json(const json& j, TournamentPlayerInfoDTO& v) { 
    v.seasonVp = j.at("seasonVp").get<int32_t>(); 
    v.themeVps = j.at("themeVps").get<std::vector<ThemeVp>>(); 
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO>>(); 
    v.rosterStats = j.at("rosterStats").get<std::vector<RosterStatsDTO>>(); 
    v.player = j.at("player").get<PlayerDTO>(); 
    v.time = j.at("time").get<int64_t>(); 
  }
} 
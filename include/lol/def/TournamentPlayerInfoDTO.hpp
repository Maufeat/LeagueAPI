#pragma once
#include "../base_def.hpp" 
#include "RosterStatsDTO.hpp"
#include "PlayerDTO.hpp"
#include "TournamentInfoDTO.hpp"
#include "ThemeVp.hpp"
namespace lol {
  struct TournamentPlayerInfoDTO { 
    std::vector<RosterStatsDTO> rosterStats;
    std::vector<TournamentInfoDTO> tournamentInfo;
    PlayerDTO player;
    int64_t time;
    std::vector<ThemeVp> themeVps;
    int32_t seasonVp; 
  };
  inline void to_json(json& j, const TournamentPlayerInfoDTO& v) {
    j["rosterStats"] = v.rosterStats; 
    j["tournamentInfo"] = v.tournamentInfo; 
    j["player"] = v.player; 
    j["time"] = v.time; 
    j["themeVps"] = v.themeVps; 
    j["seasonVp"] = v.seasonVp; 
  }
  inline void from_json(const json& j, TournamentPlayerInfoDTO& v) {
    v.rosterStats = j.at("rosterStats").get<std::vector<RosterStatsDTO>>(); 
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO>>(); 
    v.player = j.at("player").get<PlayerDTO>(); 
    v.time = j.at("time").get<int64_t>(); 
    v.themeVps = j.at("themeVps").get<std::vector<ThemeVp>>(); 
    v.seasonVp = j.at("seasonVp").get<int32_t>(); 
  }
}
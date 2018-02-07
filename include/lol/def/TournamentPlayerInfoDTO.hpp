#pragma once
#include "../base_def.hpp" 
#include "TournamentInfoDTO.hpp"
#include "PlayerDTO.hpp"
#include "RosterStatsDTO.hpp"
#include "ThemeVp.hpp"
namespace lol {
  struct TournamentPlayerInfoDTO { 
    std::vector<TournamentInfoDTO> tournamentInfo;
    std::vector<RosterStatsDTO> rosterStats;
    PlayerDTO player;
    int32_t seasonVp;
    std::vector<ThemeVp> themeVps;
    int64_t time; 
  };
  inline void to_json(json& j, const TournamentPlayerInfoDTO& v) {
    j["tournamentInfo"] = v.tournamentInfo; 
    j["rosterStats"] = v.rosterStats; 
    j["player"] = v.player; 
    j["seasonVp"] = v.seasonVp; 
    j["themeVps"] = v.themeVps; 
    j["time"] = v.time; 
  }
  inline void from_json(const json& j, TournamentPlayerInfoDTO& v) {
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO>>(); 
    v.rosterStats = j.at("rosterStats").get<std::vector<RosterStatsDTO>>(); 
    v.player = j.at("player").get<PlayerDTO>(); 
    v.seasonVp = j.at("seasonVp").get<int32_t>(); 
    v.themeVps = j.at("themeVps").get<std::vector<ThemeVp>>(); 
    v.time = j.at("time").get<int64_t>(); 
  }
}
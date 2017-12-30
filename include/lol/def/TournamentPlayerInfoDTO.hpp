#pragma once
#include "../base_def.hpp" 
#include "TournamentInfoDTO.hpp"
#include "PlayerDTO.hpp"
#include "ThemeVp.hpp"
#include "RosterStatsDTO.hpp"
namespace lol {
  struct TournamentPlayerInfoDTO { 
    int32_t seasonVp;
    std::vector<ThemeVp> themeVps;
    PlayerDTO player;
    std::vector<RosterStatsDTO> rosterStats;
    std::vector<TournamentInfoDTO> tournamentInfo;
    int64_t time; 
  };
  inline void to_json(json& j, const TournamentPlayerInfoDTO& v) {
    j["seasonVp"] = v.seasonVp; 
    j["themeVps"] = v.themeVps; 
    j["player"] = v.player; 
    j["rosterStats"] = v.rosterStats; 
    j["tournamentInfo"] = v.tournamentInfo; 
    j["time"] = v.time; 
  }
  inline void from_json(const json& j, TournamentPlayerInfoDTO& v) {
    v.seasonVp = j.at("seasonVp").get<int32_t>(); 
    v.themeVps = j.at("themeVps").get<std::vector<ThemeVp>>(); 
    v.player = j.at("player").get<PlayerDTO>(); 
    v.rosterStats = j.at("rosterStats").get<std::vector<RosterStatsDTO>>(); 
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO>>(); 
    v.time = j.at("time").get<int64_t>(); 
  }
}
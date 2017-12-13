#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RosterStatsDTO.hpp>
#include <lol/def/ThemeVp.hpp>
#include <lol/def/TournamentInfoDTO.hpp>
#include <lol/def/PlayerDTO.hpp>
namespace lol {
  struct TournamentPlayerInfoDTO { 
    int32_t seasonVp;
    std::vector<ThemeVp> themeVps;
    std::vector<TournamentInfoDTO> tournamentInfo;
    std::vector<RosterStatsDTO> rosterStats;
    PlayerDTO player;
    int64_t time; 
  };
  void to_json(json& j, const TournamentPlayerInfoDTO& v) {
  j["seasonVp"] = v.seasonVp; 
  j["themeVps"] = v.themeVps; 
  j["tournamentInfo"] = v.tournamentInfo; 
  j["rosterStats"] = v.rosterStats; 
  j["player"] = v.player; 
  j["time"] = v.time; 
  }
  void from_json(const json& j, TournamentPlayerInfoDTO& v) {
  v.seasonVp = j.at("seasonVp").get<int32_t>(); 
  v.themeVps = j.at("themeVps").get<std::vector<ThemeVp>>(); 
  v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO>>(); 
  v.rosterStats = j.at("rosterStats").get<std::vector<RosterStatsDTO>>(); 
  v.player = j.at("player").get<PlayerDTO>(); 
  v.time = j.at("time").get<int64_t>(); 
  }
}
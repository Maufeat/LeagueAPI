#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/TournamentInfoDTO.hpp>
namespace lol {
  struct TournamentInfoMinimalDTO { 
    int64_t time;
    std::vector<TournamentInfoDTO> tournamentInfo; 
  };
  inline void to_json(json& j, const TournamentInfoMinimalDTO& v) {
    j["time"] = v.time; 
    j["tournamentInfo"] = v.tournamentInfo; 
  }
  inline void from_json(const json& j, TournamentInfoMinimalDTO& v) {
    v.time = j.at("time").get<int64_t>(); 
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO>>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/TournamentInfoDTO.hpp>
namespace lol {
  struct TournamentInfoMinimalDTO { 
    std::vector<TournamentInfoDTO> tournamentInfo;
    int64_t time; 
  };
  void to_json(json& j, const TournamentInfoMinimalDTO& v) {
  j["tournamentInfo"] = v.tournamentInfo; 
  j["time"] = v.time; 
  }
  void from_json(const json& j, TournamentInfoMinimalDTO& v) {
  v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO>>(); 
  v.time = j.at("time").get<int64_t>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "RosterMemberDTO.hpp"
namespace lol {
  struct PlayerRosterHistoryDTO { 
    std::vector<RosterMemberDTO> rosters; 
  };
  inline void to_json(json& j, const PlayerRosterHistoryDTO& v) {
    j["rosters"] = v.rosters; 
  }
  inline void from_json(const json& j, PlayerRosterHistoryDTO& v) {
    v.rosters = j.at("rosters").get<std::vector<RosterMemberDTO>>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "TournamentDTO.hpp"
#include "PendingRosterDTO.hpp"
#include "RosterDTO.hpp"
namespace lol {
  struct TournamentInfoDTO { 
    TournamentDTO tournament;
    std::optional<RosterDTO> roster;
    std::vector<RosterDTO> subRosters;
    std::optional<PendingRosterDTO> pendingRoster;
    std::vector<PendingRosterDTO> inviteePendingRosters;
    int32_t themeVp; 
  };
  inline void to_json(json& j, const TournamentInfoDTO& v) {
    j["tournament"] = v.tournament; 
    if(v.roster)
      j["roster"] = *v.roster;
    j["subRosters"] = v.subRosters; 
    if(v.pendingRoster)
      j["pendingRoster"] = *v.pendingRoster;
    j["inviteePendingRosters"] = v.inviteePendingRosters; 
    j["themeVp"] = v.themeVp; 
  }
  inline void from_json(const json& j, TournamentInfoDTO& v) {
    v.tournament = j.at("tournament").get<TournamentDTO>(); 
    if(auto it = j.find("roster"); it != j.end() && !it->is_null())
      v.roster = it->get<std::optional<RosterDTO>>(); 
    v.subRosters = j.at("subRosters").get<std::vector<RosterDTO>>(); 
    if(auto it = j.find("pendingRoster"); it != j.end() && !it->is_null())
      v.pendingRoster = it->get<std::optional<PendingRosterDTO>>(); 
    v.inviteePendingRosters = j.at("inviteePendingRosters").get<std::vector<PendingRosterDTO>>(); 
    v.themeVp = j.at("themeVp").get<int32_t>(); 
  }
}
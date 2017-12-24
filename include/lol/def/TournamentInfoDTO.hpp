#pragma once
#include "../base_def.hpp" 
#include "TournamentDTO.hpp"
#include "PendingRosterDTO.hpp"
#include "RosterDTO.hpp"
namespace lol {
  struct TournamentInfoDTO { 
    std::vector<RosterDTO> subRosters;
    int32_t themeVp;
    std::optional<PendingRosterDTO> pendingRoster;
    TournamentDTO tournament;
    std::optional<RosterDTO> roster;
    std::vector<PendingRosterDTO> inviteePendingRosters; 
  };
  inline void to_json(json& j, const TournamentInfoDTO& v) {
    j["subRosters"] = v.subRosters; 
    j["themeVp"] = v.themeVp; 
    if(v.pendingRoster)
      j["pendingRoster"] = *v.pendingRoster;
    j["tournament"] = v.tournament; 
    if(v.roster)
      j["roster"] = *v.roster;
    j["inviteePendingRosters"] = v.inviteePendingRosters; 
  }
  inline void from_json(const json& j, TournamentInfoDTO& v) {
    v.subRosters = j.at("subRosters").get<std::vector<RosterDTO>>(); 
    v.themeVp = j.at("themeVp").get<int32_t>(); 
    if(auto it = j.find("pendingRoster"); it != j.end() && !it->is_null())
      v.pendingRoster = it->get<std::optional<PendingRosterDTO>>(); 
    v.tournament = j.at("tournament").get<TournamentDTO>(); 
    if(auto it = j.find("roster"); it != j.end() && !it->is_null())
      v.roster = it->get<std::optional<RosterDTO>>(); 
    v.inviteePendingRosters = j.at("inviteePendingRosters").get<std::vector<PendingRosterDTO>>(); 
  }
}
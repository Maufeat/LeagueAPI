#pragma once
#include "../base_def.hpp" 
#include "TournamentDTO.hpp"
#include "RosterDTO.hpp"
#include "PendingRosterDTO.hpp"
namespace lol {
  struct TournamentInfoDTO { 
    std::optional<PendingRosterDTO> pendingRoster;
    std::vector<RosterDTO> subRosters;
    std::optional<RosterDTO> roster;
    int32_t themeVp;
    std::vector<PendingRosterDTO> inviteePendingRosters;
    TournamentDTO tournament; 
  };
  inline void to_json(json& j, const TournamentInfoDTO& v) {
    if(v.pendingRoster)
      j["pendingRoster"] = *v.pendingRoster;
    j["subRosters"] = v.subRosters; 
    if(v.roster)
      j["roster"] = *v.roster;
    j["themeVp"] = v.themeVp; 
    j["inviteePendingRosters"] = v.inviteePendingRosters; 
    j["tournament"] = v.tournament; 
  }
  inline void from_json(const json& j, TournamentInfoDTO& v) {
    if(auto it = j.find("pendingRoster"); it != j.end() && !it->is_null())
      v.pendingRoster = it->get<std::optional<PendingRosterDTO>>(); 
    v.subRosters = j.at("subRosters").get<std::vector<RosterDTO>>(); 
    if(auto it = j.find("roster"); it != j.end() && !it->is_null())
      v.roster = it->get<std::optional<RosterDTO>>(); 
    v.themeVp = j.at("themeVp").get<int32_t>(); 
    v.inviteePendingRosters = j.at("inviteePendingRosters").get<std::vector<PendingRosterDTO>>(); 
    v.tournament = j.at("tournament").get<TournamentDTO>(); 
  }
}
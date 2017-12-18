#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PendingRosterDTO.hpp>
#include <lol/def/RosterDTO.hpp>
#include <lol/def/TournamentDTO.hpp>
namespace lol {
  struct TournamentInfoDTO { 
    int32_t themeVp;
    TournamentDTO tournament;
    std::vector<PendingRosterDTO> inviteePendingRosters;
    std::vector<RosterDTO> subRosters;
    std::optional<RosterDTO> roster;
    std::optional<PendingRosterDTO> pendingRoster; 
  };
  inline void to_json(json& j, const TournamentInfoDTO& v) {
    j["themeVp"] = v.themeVp; 
    j["tournament"] = v.tournament; 
    j["inviteePendingRosters"] = v.inviteePendingRosters; 
    j["subRosters"] = v.subRosters; 
    if(v.roster)
      j["roster"] = *v.roster;
    if(v.pendingRoster)
      j["pendingRoster"] = *v.pendingRoster;
  }
  inline void from_json(const json& j, TournamentInfoDTO& v) {
    v.themeVp = j.at("themeVp").get<int32_t>(); 
    v.tournament = j.at("tournament").get<TournamentDTO>(); 
    v.inviteePendingRosters = j.at("inviteePendingRosters").get<std::vector<PendingRosterDTO>>(); 
    v.subRosters = j.at("subRosters").get<std::vector<RosterDTO>>(); 
    if(auto it = j.find("roster"); it != j.end() && !it->is_null())
      v.roster = it->get<std::optional<RosterDTO>>(); 
    if(auto it = j.find("pendingRoster"); it != j.end() && !it->is_null())
      v.pendingRoster = it->get<std::optional<PendingRosterDTO>>(); 
  }
}
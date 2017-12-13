#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PendingRosterDTO.hpp>
#include <lol/def/RosterDTO.hpp>
#include <lol/def/TournamentDTO.hpp>
namespace lol {
  struct TournamentInfoDTO { 
    TournamentDTO tournament;
    std::vector<RosterDTO> subRosters;
    int32_t themeVp;
    std::vector<PendingRosterDTO> inviteePendingRosters;
    std::optional<RosterDTO> roster;
    std::optional<PendingRosterDTO> pendingRoster; 
  };
  void to_json(json& j, const TournamentInfoDTO& v) {
  j["tournament"] = v.tournament; 
  j["subRosters"] = v.subRosters; 
  j["themeVp"] = v.themeVp; 
  j["inviteePendingRosters"] = v.inviteePendingRosters; 
  j["roster"] = v.roster; 
  j["pendingRoster"] = v.pendingRoster; 
  }
  void from_json(const json& j, TournamentInfoDTO& v) {
  v.tournament = j.at("tournament").get<TournamentDTO>(); 
  v.subRosters = j.at("subRosters").get<std::vector<RosterDTO>>(); 
  v.themeVp = j.at("themeVp").get<int32_t>(); 
  v.inviteePendingRosters = j.at("inviteePendingRosters").get<std::vector<PendingRosterDTO>>(); 
  v.roster = j.at("roster").get<std::optional<RosterDTO>>(); 
  v.pendingRoster = j.at("pendingRoster").get<std::optional<PendingRosterDTO>>(); 
  }
}
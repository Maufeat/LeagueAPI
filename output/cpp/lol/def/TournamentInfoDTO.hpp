#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/TournamentDTO.hpp>
#include <lol/def/PendingRosterDTO.hpp>
#include <lol/def/RosterDTO.hpp>
namespace lol {
  struct TournamentInfoDTO { 
    int32_t themeVp;
    TournamentDTO tournament;
    std::vector<PendingRosterDTO> inviteePendingRosters;
    std::vector<RosterDTO> subRosters;
    std::optional<RosterDTO> roster;
    std::optional<PendingRosterDTO> pendingRoster; 
  };
  void to_json(json& j, const TournamentInfoDTO& v) {
  j["themeVp"] = v.themeVp; 
  j["tournament"] = v.tournament; 
  j["inviteePendingRosters"] = v.inviteePendingRosters; 
  j["subRosters"] = v.subRosters; 
  j["roster"] = v.roster; 
  j["pendingRoster"] = v.pendingRoster; 
  }
  void from_json(const json& j, TournamentInfoDTO& v) {
  v.themeVp = j.at("themeVp").get<int32_t>(); 
  v.tournament = j.at("tournament").get<TournamentDTO>(); 
  v.inviteePendingRosters = j.at("inviteePendingRosters").get<std::vector<PendingRosterDTO>>(); 
  v.subRosters = j.at("subRosters").get<std::vector<RosterDTO>>(); 
  v.roster = j.at("roster").get<std::optional<RosterDTO>>(); 
  v.pendingRoster = j.at("pendingRoster").get<std::optional<PendingRosterDTO>>(); 
  }
}
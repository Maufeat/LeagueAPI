#pragma once
#include "../base_def.hpp" 
#include "BracketRoster.hpp"
#include "BracketMatch.hpp"
namespace lol {
  struct Bracket { 
    int64_t tournamentId;
    int32_t size;
    int64_t phaseId;
    std::vector<BracketRoster> rosters;
    std::vector<BracketMatch> matches;
    int64_t id;
    int32_t currentRound;
    int32_t currentLoserRound;
    std::vector<BracketMatch> loserBracketMatches; 
  };
  inline void to_json(json& j, const Bracket& v) {
    j["tournamentId"] = v.tournamentId; 
    j["size"] = v.size; 
    j["phaseId"] = v.phaseId; 
    j["rosters"] = v.rosters; 
    j["matches"] = v.matches; 
    j["id"] = v.id; 
    j["currentRound"] = v.currentRound; 
    j["currentLoserRound"] = v.currentLoserRound; 
    j["loserBracketMatches"] = v.loserBracketMatches; 
  }
  inline void from_json(const json& j, Bracket& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.size = j.at("size").get<int32_t>(); 
    v.phaseId = j.at("phaseId").get<int64_t>(); 
    v.rosters = j.at("rosters").get<std::vector<BracketRoster>>(); 
    v.matches = j.at("matches").get<std::vector<BracketMatch>>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.currentRound = j.at("currentRound").get<int32_t>(); 
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>(); 
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch>>(); 
  }
}
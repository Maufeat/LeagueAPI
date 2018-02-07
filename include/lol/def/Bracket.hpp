#pragma once
#include "../base_def.hpp" 
#include "BracketMatch.hpp"
#include "BracketRoster.hpp"
namespace lol {
  struct Bracket { 
    int32_t version;
    int64_t tournamentId;
    int64_t phaseId;
    int64_t id;
    int32_t size;
    int32_t currentRound;
    int32_t currentLoserRound;
    std::vector<BracketMatch> matches;
    std::vector<BracketMatch> loserBracketMatches;
    std::vector<BracketRoster> rosters; 
  };
  inline void to_json(json& j, const Bracket& v) {
    j["version"] = v.version; 
    j["tournamentId"] = v.tournamentId; 
    j["phaseId"] = v.phaseId; 
    j["id"] = v.id; 
    j["size"] = v.size; 
    j["currentRound"] = v.currentRound; 
    j["currentLoserRound"] = v.currentLoserRound; 
    j["matches"] = v.matches; 
    j["loserBracketMatches"] = v.loserBracketMatches; 
    j["rosters"] = v.rosters; 
  }
  inline void from_json(const json& j, Bracket& v) {
    v.version = j.at("version").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.phaseId = j.at("phaseId").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.size = j.at("size").get<int32_t>(); 
    v.currentRound = j.at("currentRound").get<int32_t>(); 
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>(); 
    v.matches = j.at("matches").get<std::vector<BracketMatch>>(); 
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch>>(); 
    v.rosters = j.at("rosters").get<std::vector<BracketRoster>>(); 
  }
}
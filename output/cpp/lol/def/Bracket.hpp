#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BracketMatch.hpp>
#include <lol/def/BracketRoster.hpp>
namespace lol {
  struct Bracket { 
    int64_t phaseId;
    int32_t currentLoserRound;
    int64_t tournamentId;
    std::vector<BracketMatch> matches;
    int32_t size;
    std::vector<BracketMatch> loserBracketMatches;
    int32_t currentRound;
    std::vector<BracketRoster> rosters;
    int64_t id; 
  };
  void to_json(json& j, const Bracket& v) {
    j["phaseId"] = v.phaseId; 
    j["currentLoserRound"] = v.currentLoserRound; 
    j["tournamentId"] = v.tournamentId; 
    j["matches"] = v.matches; 
    j["size"] = v.size; 
    j["loserBracketMatches"] = v.loserBracketMatches; 
    j["currentRound"] = v.currentRound; 
    j["rosters"] = v.rosters; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, Bracket& v) {
    v.phaseId = j.at("phaseId").get<int64_t>(); 
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.matches = j.at("matches").get<std::vector<BracketMatch>>(); 
    v.size = j.at("size").get<int32_t>(); 
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch>>(); 
    v.currentRound = j.at("currentRound").get<int32_t>(); 
    v.rosters = j.at("rosters").get<std::vector<BracketRoster>>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}
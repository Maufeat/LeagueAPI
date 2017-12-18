#pragma once
#include "../base_def.hpp" 
#include "BracketRoster.hpp"
#include "BracketMatch.hpp"
namespace lol {
  struct LolClashBracket { 
    int32_t period;
    int32_t currentLoserRound;
    int64_t tournamentId;
    std::vector<BracketMatch> matches;
    int32_t size;
    std::vector<BracketMatch> loserBracketMatches;
    int32_t currentRound;
    std::vector<BracketRoster> rosters;
    bool isComplete;
    int64_t id; 
  };
  inline void to_json(json& j, const LolClashBracket& v) {
    j["period"] = v.period; 
    j["currentLoserRound"] = v.currentLoserRound; 
    j["tournamentId"] = v.tournamentId; 
    j["matches"] = v.matches; 
    j["size"] = v.size; 
    j["loserBracketMatches"] = v.loserBracketMatches; 
    j["currentRound"] = v.currentRound; 
    j["rosters"] = v.rosters; 
    j["isComplete"] = v.isComplete; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolClashBracket& v) {
    v.period = j.at("period").get<int32_t>(); 
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.matches = j.at("matches").get<std::vector<BracketMatch>>(); 
    v.size = j.at("size").get<int32_t>(); 
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch>>(); 
    v.currentRound = j.at("currentRound").get<int32_t>(); 
    v.rosters = j.at("rosters").get<std::vector<BracketRoster>>(); 
    v.isComplete = j.at("isComplete").get<bool>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}
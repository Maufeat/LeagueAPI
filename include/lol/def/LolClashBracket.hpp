#pragma once
#include "../base_def.hpp" 
#include "BracketMatch.hpp"
#include "BracketRoster.hpp"
namespace lol {
  struct LolClashBracket { 
    int64_t tournamentId;
    int64_t id;
    int32_t size;
    int32_t currentRound;
    int32_t currentLoserRound;
    std::vector<BracketMatch> matches;
    std::vector<BracketMatch> loserBracketMatches;
    std::vector<BracketRoster> rosters;
    int32_t period;
    bool isComplete; 
  };
  inline void to_json(json& j, const LolClashBracket& v) {
    j["tournamentId"] = v.tournamentId; 
    j["id"] = v.id; 
    j["size"] = v.size; 
    j["currentRound"] = v.currentRound; 
    j["currentLoserRound"] = v.currentLoserRound; 
    j["matches"] = v.matches; 
    j["loserBracketMatches"] = v.loserBracketMatches; 
    j["rosters"] = v.rosters; 
    j["period"] = v.period; 
    j["isComplete"] = v.isComplete; 
  }
  inline void from_json(const json& j, LolClashBracket& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.size = j.at("size").get<int32_t>(); 
    v.currentRound = j.at("currentRound").get<int32_t>(); 
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>(); 
    v.matches = j.at("matches").get<std::vector<BracketMatch>>(); 
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch>>(); 
    v.rosters = j.at("rosters").get<std::vector<BracketRoster>>(); 
    v.period = j.at("period").get<int32_t>(); 
    v.isComplete = j.at("isComplete").get<bool>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "BracketRoster.hpp"
#include "BracketMatch.hpp"
namespace lol {
  struct LolClashBracket { 
    int32_t size;
    int64_t tournamentId;
    std::vector<BracketRoster> rosters;
    std::vector<BracketMatch> matches;
    int64_t id;
    int32_t currentRound;
    int32_t currentLoserRound;
    bool isComplete;
    int32_t period;
    std::vector<BracketMatch> loserBracketMatches; 
  };
  inline void to_json(json& j, const LolClashBracket& v) {
    j["size"] = v.size; 
    j["tournamentId"] = v.tournamentId; 
    j["rosters"] = v.rosters; 
    j["matches"] = v.matches; 
    j["id"] = v.id; 
    j["currentRound"] = v.currentRound; 
    j["currentLoserRound"] = v.currentLoserRound; 
    j["isComplete"] = v.isComplete; 
    j["period"] = v.period; 
    j["loserBracketMatches"] = v.loserBracketMatches; 
  }
  inline void from_json(const json& j, LolClashBracket& v) {
    v.size = j.at("size").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.rosters = j.at("rosters").get<std::vector<BracketRoster>>(); 
    v.matches = j.at("matches").get<std::vector<BracketMatch>>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.currentRound = j.at("currentRound").get<int32_t>(); 
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>(); 
    v.isComplete = j.at("isComplete").get<bool>(); 
    v.period = j.at("period").get<int32_t>(); 
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch>>(); 
  }
}
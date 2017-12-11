#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/BracketRoster.hpp>
#include <leagueapi/definitions/BracketMatch.hpp>

namespace leagueapi {
  struct Bracket { /**/ 
    std::vector<BracketMatch> matches;/**/
    int64_t id;/**/
    int64_t tournamentId;/**/
    int32_t currentLoserRound;/**/
    std::vector<BracketRoster> rosters;/**/
    std::vector<BracketMatch> loserBracketMatches;/**/
    int32_t currentRound;/**/
    int32_t size;/**/
    int64_t phaseId;/**/
  };
  static void to_json(json& j, const Bracket& v) { 
    j["matches"] = v.matches;
    j["id"] = v.id;
    j["tournamentId"] = v.tournamentId;
    j["currentLoserRound"] = v.currentLoserRound;
    j["rosters"] = v.rosters;
    j["loserBracketMatches"] = v.loserBracketMatches;
    j["currentRound"] = v.currentRound;
    j["size"] = v.size;
    j["phaseId"] = v.phaseId;
  }
  static void from_json(const json& j, Bracket& v) { 
    v.matches = j.at("matches").get<std::vector<BracketMatch>>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>(); 
    v.rosters = j.at("rosters").get<std::vector<BracketRoster>>(); 
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch>>(); 
    v.currentRound = j.at("currentRound").get<int32_t>(); 
    v.size = j.at("size").get<int32_t>(); 
    v.phaseId = j.at("phaseId").get<int64_t>(); 
  }
} 
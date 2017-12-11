#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/BracketMatch.hpp>"
#include "<leagueapi/definitions/BracketRoster.hpp>"

namespace leagueapi {
  struct LolClashBracket { /**/ 
    std::vector<BracketMatch> matches;/**/
    int64_t id;/**/
    int32_t period;/**/
    int64_t tournamentId;/**/
    int32_t currentLoserRound;/**/
    std::vector<BracketRoster> rosters;/**/
    std::vector<BracketMatch> loserBracketMatches;/**/
    int32_t currentRound;/**/
    int32_t size;/**/
    bool isComplete;/**/
  };
  static void to_json(json& j, const LolClashBracket& v) { 
    j["matches"] = v.matches;
    j["id"] = v.id;
    j["period"] = v.period;
    j["tournamentId"] = v.tournamentId;
    j["currentLoserRound"] = v.currentLoserRound;
    j["rosters"] = v.rosters;
    j["loserBracketMatches"] = v.loserBracketMatches;
    j["currentRound"] = v.currentRound;
    j["size"] = v.size;
    j["isComplete"] = v.isComplete;
  }
  static void from_json(const json& j, LolClashBracket& v) { 
    v.matches = j.at("matches").get<std::vector<BracketMatch>>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.period = j.at("period").get<int32_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.currentLoserRound = j.at("currentLoserRound").get<int32_t>(); 
    v.rosters = j.at("rosters").get<std::vector<BracketRoster>>(); 
    v.loserBracketMatches = j.at("loserBracketMatches").get<std::vector<BracketMatch>>(); 
    v.currentRound = j.at("currentRound").get<int32_t>(); 
    v.size = j.at("size").get<int32_t>(); 
    v.isComplete = j.at("isComplete").get<bool>(); 
  }
} 
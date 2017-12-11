#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/MatchmakingLcdsPlayerParticipant.hpp>

namespace leagueapi {
  struct MatchmakingLcdsGameDTO { /**/ 
    std::vector<MatchmakingLcdsPlayerParticipant> teamOne;/**/
    std::string gameState;/**/
    std::string terminatedCondition;/**/
    std::string statusOfParticipants;/**/
    std::vector<MatchmakingLcdsPlayerParticipant> teamTwo;/**/
  };
  static void to_json(json& j, const MatchmakingLcdsGameDTO& v) { 
    j["teamOne"] = v.teamOne;
    j["gameState"] = v.gameState;
    j["terminatedCondition"] = v.terminatedCondition;
    j["statusOfParticipants"] = v.statusOfParticipants;
    j["teamTwo"] = v.teamTwo;
  }
  static void from_json(const json& j, MatchmakingLcdsGameDTO& v) { 
    v.teamOne = j.at("teamOne").get<std::vector<MatchmakingLcdsPlayerParticipant>>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.terminatedCondition = j.at("terminatedCondition").get<std::string>(); 
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<MatchmakingLcdsPlayerParticipant>>(); 
  }
} 
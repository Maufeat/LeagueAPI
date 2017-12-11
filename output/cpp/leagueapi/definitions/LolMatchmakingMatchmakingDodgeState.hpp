#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolMatchmakingMatchmakingDodgeState { /**/ 
    Invalid_e = 48, /**/ 
    PartyDodged_e = 49, /**/ 
    StrangerDodged_e = 50, /**/ 
    TournamentDodged_e = 51, /**/ 
  };
  static void to_json(json& j, const LolMatchmakingMatchmakingDodgeState& v) {
    switch(v) { 
    case LolMatchmakingMatchmakingDodgeState::Invalid_e:
      j = "Invalid";
    break;
    case LolMatchmakingMatchmakingDodgeState::PartyDodged_e:
      j = "PartyDodged";
    break;
    case LolMatchmakingMatchmakingDodgeState::StrangerDodged_e:
      j = "StrangerDodged";
    break;
    case LolMatchmakingMatchmakingDodgeState::TournamentDodged_e:
      j = "TournamentDodged";
    break;
    };
  }
  static void from_json(const json& j, LolMatchmakingMatchmakingDodgeState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Invalid") {
      v = LolMatchmakingMatchmakingDodgeState::Invalid_e;
      return;
    } 
    if(s == "PartyDodged") {
      v = LolMatchmakingMatchmakingDodgeState::PartyDodged_e;
      return;
    } 
    if(s == "StrangerDodged") {
      v = LolMatchmakingMatchmakingDodgeState::StrangerDodged_e;
      return;
    } 
    if(s == "TournamentDodged") {
      v = LolMatchmakingMatchmakingDodgeState::TournamentDodged_e;
      return;
    } 
  }
} 
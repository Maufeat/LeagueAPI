#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashMatchmakingDodgeState { /**/ 
    Invalid_e = 48, /**/ 
    PartyDodged_e = 49, /**/ 
    StrangerDodged_e = 50, /**/ 
    TournamentDodged_e = 51, /**/ 
  };
  static void to_json(json& j, const LolClashMatchmakingDodgeState& v) {
    switch(v) { 
    case LolClashMatchmakingDodgeState::Invalid_e:
      j = "Invalid";
    break;
    case LolClashMatchmakingDodgeState::PartyDodged_e:
      j = "PartyDodged";
    break;
    case LolClashMatchmakingDodgeState::StrangerDodged_e:
      j = "StrangerDodged";
    break;
    case LolClashMatchmakingDodgeState::TournamentDodged_e:
      j = "TournamentDodged";
    break;
    };
  }
  static void from_json(const json& j, LolClashMatchmakingDodgeState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Invalid") {
      v = LolClashMatchmakingDodgeState::Invalid_e;
      return;
    } 
    if(s == "PartyDodged") {
      v = LolClashMatchmakingDodgeState::PartyDodged_e;
      return;
    } 
    if(s == "StrangerDodged") {
      v = LolClashMatchmakingDodgeState::StrangerDodged_e;
      return;
    } 
    if(s == "TournamentDodged") {
      v = LolClashMatchmakingDodgeState::TournamentDodged_e;
      return;
    } 
  }
} 
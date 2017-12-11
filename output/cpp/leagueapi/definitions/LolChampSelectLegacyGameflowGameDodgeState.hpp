#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolChampSelectLegacyGameflowGameDodgeState { /**/ 
    Invalid_e = 48, /**/ 
    PartyDodged_e = 49, /**/ 
    StrangerDodged_e = 50, /**/ 
    TournamentDodged_e = 51, /**/ 
  };
  static void to_json(json& j, const LolChampSelectLegacyGameflowGameDodgeState& v) {
    switch(v) { 
    case LolChampSelectLegacyGameflowGameDodgeState::Invalid_e:
      j = "Invalid";
    break;
    case LolChampSelectLegacyGameflowGameDodgeState::PartyDodged_e:
      j = "PartyDodged";
    break;
    case LolChampSelectLegacyGameflowGameDodgeState::StrangerDodged_e:
      j = "StrangerDodged";
    break;
    case LolChampSelectLegacyGameflowGameDodgeState::TournamentDodged_e:
      j = "TournamentDodged";
    break;
    };
  }
  static void from_json(const json& j, LolChampSelectLegacyGameflowGameDodgeState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Invalid") {
      v = LolChampSelectLegacyGameflowGameDodgeState::Invalid_e;
      return;
    } 
    if(s == "PartyDodged") {
      v = LolChampSelectLegacyGameflowGameDodgeState::PartyDodged_e;
      return;
    } 
    if(s == "StrangerDodged") {
      v = LolChampSelectLegacyGameflowGameDodgeState::StrangerDodged_e;
      return;
    } 
    if(s == "TournamentDodged") {
      v = LolChampSelectLegacyGameflowGameDodgeState::TournamentDodged_e;
      return;
    } 
  }
} 
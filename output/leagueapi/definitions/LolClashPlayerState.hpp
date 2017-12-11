#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashPlayerState { /**/ 
    BRACKET_ROSTER_e = 2, /**/ 
    ELIMINATED_e = 3, /**/ 
    HAS_ROSTER_e = 1, /**/ 
    NO_ROSTER_e = 0, /**/ 
  };
  static void to_json(json& j, const LolClashPlayerState& v) {
    switch(v) { 
    case LolClashPlayerState::BRACKET_ROSTER_e:
      j = "BRACKET_ROSTER";
    break;
    case LolClashPlayerState::ELIMINATED_e:
      j = "ELIMINATED";
    break;
    case LolClashPlayerState::HAS_ROSTER_e:
      j = "HAS_ROSTER";
    break;
    case LolClashPlayerState::NO_ROSTER_e:
      j = "NO_ROSTER";
    break;
    };
  }
  static void from_json(const json& j, LolClashPlayerState& v) {
    auto s = j.get<std::string>(); 
    if(s == "BRACKET_ROSTER") {
      v = LolClashPlayerState::BRACKET_ROSTER_e;
      return;
    } 
    if(s == "ELIMINATED") {
      v = LolClashPlayerState::ELIMINATED_e;
      return;
    } 
    if(s == "HAS_ROSTER") {
      v = LolClashPlayerState::HAS_ROSTER_e;
      return;
    } 
    if(s == "NO_ROSTER") {
      v = LolClashPlayerState::NO_ROSTER_e;
      return;
    } 
  }
} 
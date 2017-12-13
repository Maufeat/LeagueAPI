#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolClashPlayerState {  
    BRACKET_ROSTER_e = 2,
    ELIMINATED_e = 3,
    HAS_ROSTER_e = 1,
    NO_ROSTER_e = 0,
  };
  void to_json(json& j, const LolClashPlayerState& v) {
  if(v == LolClashPlayerState::BRACKET_ROSTER_e) {
    j = "BRACKET_ROSTER";
    return;
  }
  if(v == LolClashPlayerState::ELIMINATED_e) {
    j = "ELIMINATED";
    return;
  }
  if(v == LolClashPlayerState::HAS_ROSTER_e) {
    j = "HAS_ROSTER";
    return;
  }
  if(v == LolClashPlayerState::NO_ROSTER_e) {
    j = "NO_ROSTER";
    return;
  }
  }
  void from_json(const json& j, LolClashPlayerState& v) {
  if(j.get<std::string>() == "BRACKET_ROSTER") {
    v = LolClashPlayerState::BRACKET_ROSTER_e;
    return;
  } 
  if(j.get<std::string>() == "ELIMINATED") {
    v = LolClashPlayerState::ELIMINATED_e;
    return;
  } 
  if(j.get<std::string>() == "HAS_ROSTER") {
    v = LolClashPlayerState::HAS_ROSTER_e;
    return;
  } 
  if(j.get<std::string>() == "NO_ROSTER") {
    v = LolClashPlayerState::NO_ROSTER_e;
    return;
  } 
  }
}
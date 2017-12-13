#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolClashPresenceState {  
    LOCKED_IN_e = 1,
    NONE_e = 0,
    SCOUTING_e = 2,
  };
  void to_json(json& j, const LolClashPresenceState& v) {
  if(v == LolClashPresenceState::LOCKED_IN_e) {
    j = "LOCKED_IN";
    return;
  }
  if(v == LolClashPresenceState::NONE_e) {
    j = "NONE";
    return;
  }
  if(v == LolClashPresenceState::SCOUTING_e) {
    j = "SCOUTING";
    return;
  }
  }
  void from_json(const json& j, LolClashPresenceState& v) {
  if(j.get<std::string>() == "LOCKED_IN") {
    v = LolClashPresenceState::LOCKED_IN_e;
    return;
  } 
  if(j.get<std::string>() == "NONE") {
    v = LolClashPresenceState::NONE_e;
    return;
  } 
  if(j.get<std::string>() == "SCOUTING") {
    v = LolClashPresenceState::SCOUTING_e;
    return;
  } 
  }
}
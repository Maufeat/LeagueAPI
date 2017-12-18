#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolClashRosterMemberState {  
    FORCED_NOT_READY_e = 2,
    NOT_READY_e = 1,
    PENDING_e = 0,
    READY_e = 3,
  };
  inline void to_json(json& j, const LolClashRosterMemberState& v) {
    if(v == LolClashRosterMemberState::FORCED_NOT_READY_e) {
      j = "FORCED_NOT_READY";
      return;
    }
    if(v == LolClashRosterMemberState::NOT_READY_e) {
      j = "NOT_READY";
      return;
    }
    if(v == LolClashRosterMemberState::PENDING_e) {
      j = "PENDING";
      return;
    }
    if(v == LolClashRosterMemberState::READY_e) {
      j = "READY";
      return;
    }
  }
  inline void from_json(const json& j, LolClashRosterMemberState& v) {
    if(j.get<std::string>() == "FORCED_NOT_READY") {
      v = LolClashRosterMemberState::FORCED_NOT_READY_e;
      return;
    } 
    if(j.get<std::string>() == "NOT_READY") {
      v = LolClashRosterMemberState::NOT_READY_e;
      return;
    } 
    if(j.get<std::string>() == "PENDING") {
      v = LolClashRosterMemberState::PENDING_e;
      return;
    } 
    if(j.get<std::string>() == "READY") {
      v = LolClashRosterMemberState::READY_e;
      return;
    } 
  }
}
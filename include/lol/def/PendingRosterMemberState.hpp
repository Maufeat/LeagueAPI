#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct PendingRosterMemberState {  
    FORCED_NOT_READY_e = 1,
    KICK_e = 4,
    LEFT_e = 3,
    NOT_READY_e = 0,
    READY_e = 2,
  };
  inline void to_json(json& j, const PendingRosterMemberState& v) {
    if(v == PendingRosterMemberState::FORCED_NOT_READY_e) {
      j = "FORCED_NOT_READY";
      return;
    }
    if(v == PendingRosterMemberState::KICK_e) {
      j = "KICK";
      return;
    }
    if(v == PendingRosterMemberState::LEFT_e) {
      j = "LEFT";
      return;
    }
    if(v == PendingRosterMemberState::NOT_READY_e) {
      j = "NOT_READY";
      return;
    }
    if(v == PendingRosterMemberState::READY_e) {
      j = "READY";
      return;
    }
  }
  inline void from_json(const json& j, PendingRosterMemberState& v) {
    if(j.get<std::string>() == "FORCED_NOT_READY") {
      v = PendingRosterMemberState::FORCED_NOT_READY_e;
      return;
    } 
    if(j.get<std::string>() == "KICK") {
      v = PendingRosterMemberState::KICK_e;
      return;
    } 
    if(j.get<std::string>() == "LEFT") {
      v = PendingRosterMemberState::LEFT_e;
      return;
    } 
    if(j.get<std::string>() == "NOT_READY") {
      v = PendingRosterMemberState::NOT_READY_e;
      return;
    } 
    if(j.get<std::string>() == "READY") {
      v = PendingRosterMemberState::READY_e;
      return;
    } 
  }
}
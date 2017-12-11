#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class PendingRosterMemberState { /**/ 
    FORCED_NOT_READY_e = 1, /**/ 
    KICK_e = 4, /**/ 
    LEFT_e = 3, /**/ 
    NOT_READY_e = 0, /**/ 
    READY_e = 2, /**/ 
  };
  static void to_json(json& j, const PendingRosterMemberState& v) {
    switch(v) { 
    case PendingRosterMemberState::FORCED_NOT_READY_e:
      j = "FORCED_NOT_READY";
    break;
    case PendingRosterMemberState::KICK_e:
      j = "KICK";
    break;
    case PendingRosterMemberState::LEFT_e:
      j = "LEFT";
    break;
    case PendingRosterMemberState::NOT_READY_e:
      j = "NOT_READY";
    break;
    case PendingRosterMemberState::READY_e:
      j = "READY";
    break;
    };
  }
  static void from_json(const json& j, PendingRosterMemberState& v) {
    auto s = j.get<std::string>(); 
    if(s == "FORCED_NOT_READY") {
      v = PendingRosterMemberState::FORCED_NOT_READY_e;
      return;
    } 
    if(s == "KICK") {
      v = PendingRosterMemberState::KICK_e;
      return;
    } 
    if(s == "LEFT") {
      v = PendingRosterMemberState::LEFT_e;
      return;
    } 
    if(s == "NOT_READY") {
      v = PendingRosterMemberState::NOT_READY_e;
      return;
    } 
    if(s == "READY") {
      v = PendingRosterMemberState::READY_e;
      return;
    } 
  }
} 
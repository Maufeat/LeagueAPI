#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class PendingRosterInviteeState { /**/ 
    DECLINED_e = 2, /**/ 
    PENDING_e = 1, /**/ 
    REVOKED_e = 3, /**/ 
    SUGGESTED_e = 0, /**/ 
  };
  static void to_json(json& j, const PendingRosterInviteeState& v) {
    switch(v) { 
    case PendingRosterInviteeState::DECLINED_e:
      j = "DECLINED";
    break;
    case PendingRosterInviteeState::PENDING_e:
      j = "PENDING";
    break;
    case PendingRosterInviteeState::REVOKED_e:
      j = "REVOKED";
    break;
    case PendingRosterInviteeState::SUGGESTED_e:
      j = "SUGGESTED";
    break;
    };
  }
  static void from_json(const json& j, PendingRosterInviteeState& v) {
    auto s = j.get<std::string>(); 
    if(s == "DECLINED") {
      v = PendingRosterInviteeState::DECLINED_e;
      return;
    } 
    if(s == "PENDING") {
      v = PendingRosterInviteeState::PENDING_e;
      return;
    } 
    if(s == "REVOKED") {
      v = PendingRosterInviteeState::REVOKED_e;
      return;
    } 
    if(s == "SUGGESTED") {
      v = PendingRosterInviteeState::SUGGESTED_e;
      return;
    } 
  }
} 
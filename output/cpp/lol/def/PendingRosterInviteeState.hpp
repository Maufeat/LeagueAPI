#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct PendingRosterInviteeState {  
    DECLINED_e = 2,
    PENDING_e = 1,
    REVOKED_e = 3,
    SUGGESTED_e = 0,
  };
  void to_json(json& j, const PendingRosterInviteeState& v) {
    if(v == PendingRosterInviteeState::DECLINED_e) {
      j = "DECLINED";
      return;
    }
    if(v == PendingRosterInviteeState::PENDING_e) {
      j = "PENDING";
      return;
    }
    if(v == PendingRosterInviteeState::REVOKED_e) {
      j = "REVOKED";
      return;
    }
    if(v == PendingRosterInviteeState::SUGGESTED_e) {
      j = "SUGGESTED";
      return;
    }
  }
  void from_json(const json& j, PendingRosterInviteeState& v) {
    if(j.get<std::string>() == "DECLINED") {
      v = PendingRosterInviteeState::DECLINED_e;
      return;
    } 
    if(j.get<std::string>() == "PENDING") {
      v = PendingRosterInviteeState::PENDING_e;
      return;
    } 
    if(j.get<std::string>() == "REVOKED") {
      v = PendingRosterInviteeState::REVOKED_e;
      return;
    } 
    if(j.get<std::string>() == "SUGGESTED") {
      v = PendingRosterInviteeState::SUGGESTED_e;
      return;
    } 
  }
}
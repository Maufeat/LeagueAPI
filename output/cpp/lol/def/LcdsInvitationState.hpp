#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LcdsInvitationState {  
    ACTIVE_e = 0,
    ON_HOLD_e = 1,
    REVOKED_e = 2,
  };
  inline void to_json(json& j, const LcdsInvitationState& v) {
    if(v == LcdsInvitationState::ACTIVE_e) {
      j = "ACTIVE";
      return;
    }
    if(v == LcdsInvitationState::ON_HOLD_e) {
      j = "ON_HOLD";
      return;
    }
    if(v == LcdsInvitationState::REVOKED_e) {
      j = "REVOKED";
      return;
    }
  }
  inline void from_json(const json& j, LcdsInvitationState& v) {
    if(j.get<std::string>() == "ACTIVE") {
      v = LcdsInvitationState::ACTIVE_e;
      return;
    } 
    if(j.get<std::string>() == "ON_HOLD") {
      v = LcdsInvitationState::ON_HOLD_e;
      return;
    } 
    if(j.get<std::string>() == "REVOKED") {
      v = LcdsInvitationState::REVOKED_e;
      return;
    } 
  }
}
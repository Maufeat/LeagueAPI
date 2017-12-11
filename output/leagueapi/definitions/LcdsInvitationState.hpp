#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LcdsInvitationState { /**/ 
    ACTIVE_e = 0, /**/ 
    ON_HOLD_e = 1, /**/ 
    REVOKED_e = 2, /**/ 
  };
  static void to_json(json& j, const LcdsInvitationState& v) {
    switch(v) { 
    case LcdsInvitationState::ACTIVE_e:
      j = "ACTIVE";
    break;
    case LcdsInvitationState::ON_HOLD_e:
      j = "ON_HOLD";
    break;
    case LcdsInvitationState::REVOKED_e:
      j = "REVOKED";
    break;
    };
  }
  static void from_json(const json& j, LcdsInvitationState& v) {
    auto s = j.get<std::string>(); 
    if(s == "ACTIVE") {
      v = LcdsInvitationState::ACTIVE_e;
      return;
    } 
    if(s == "ON_HOLD") {
      v = LcdsInvitationState::ON_HOLD_e;
      return;
    } 
    if(s == "REVOKED") {
      v = LcdsInvitationState::REVOKED_e;
      return;
    } 
  }
} 
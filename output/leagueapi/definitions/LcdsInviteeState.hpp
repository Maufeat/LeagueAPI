#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LcdsInviteeState { /**/ 
    ACCEPTED_e = 3, /**/ 
    ACCEPT_FAILED_e = 4, /**/ 
    BANNED_e = 8, /**/ 
    CREATOR_e = 0, /**/ 
    DECLINED_e = 2, /**/ 
    JOINED_e = 5, /**/ 
    KICKED_e = 7, /**/ 
    PENDING_e = 1, /**/ 
    QUIT_e = 6, /**/ 
  };
  static void to_json(json& j, const LcdsInviteeState& v) {
    switch(v) { 
    case LcdsInviteeState::ACCEPTED_e:
      j = "ACCEPTED";
    break;
    case LcdsInviteeState::ACCEPT_FAILED_e:
      j = "ACCEPT_FAILED";
    break;
    case LcdsInviteeState::BANNED_e:
      j = "BANNED";
    break;
    case LcdsInviteeState::CREATOR_e:
      j = "CREATOR";
    break;
    case LcdsInviteeState::DECLINED_e:
      j = "DECLINED";
    break;
    case LcdsInviteeState::JOINED_e:
      j = "JOINED";
    break;
    case LcdsInviteeState::KICKED_e:
      j = "KICKED";
    break;
    case LcdsInviteeState::PENDING_e:
      j = "PENDING";
    break;
    case LcdsInviteeState::QUIT_e:
      j = "QUIT";
    break;
    };
  }
  static void from_json(const json& j, LcdsInviteeState& v) {
    auto s = j.get<std::string>(); 
    if(s == "ACCEPTED") {
      v = LcdsInviteeState::ACCEPTED_e;
      return;
    } 
    if(s == "ACCEPT_FAILED") {
      v = LcdsInviteeState::ACCEPT_FAILED_e;
      return;
    } 
    if(s == "BANNED") {
      v = LcdsInviteeState::BANNED_e;
      return;
    } 
    if(s == "CREATOR") {
      v = LcdsInviteeState::CREATOR_e;
      return;
    } 
    if(s == "DECLINED") {
      v = LcdsInviteeState::DECLINED_e;
      return;
    } 
    if(s == "JOINED") {
      v = LcdsInviteeState::JOINED_e;
      return;
    } 
    if(s == "KICKED") {
      v = LcdsInviteeState::KICKED_e;
      return;
    } 
    if(s == "PENDING") {
      v = LcdsInviteeState::PENDING_e;
      return;
    } 
    if(s == "QUIT") {
      v = LcdsInviteeState::QUIT_e;
      return;
    } 
  }
} 
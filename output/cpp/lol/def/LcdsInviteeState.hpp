#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LcdsInviteeState {  
    ACCEPTED_e = 3,
    ACCEPT_FAILED_e = 4,
    BANNED_e = 8,
    CREATOR_e = 0,
    DECLINED_e = 2,
    JOINED_e = 5,
    KICKED_e = 7,
    PENDING_e = 1,
    QUIT_e = 6,
  };
  inline void to_json(json& j, const LcdsInviteeState& v) {
    if(v == LcdsInviteeState::ACCEPTED_e) {
      j = "ACCEPTED";
      return;
    }
    if(v == LcdsInviteeState::ACCEPT_FAILED_e) {
      j = "ACCEPT_FAILED";
      return;
    }
    if(v == LcdsInviteeState::BANNED_e) {
      j = "BANNED";
      return;
    }
    if(v == LcdsInviteeState::CREATOR_e) {
      j = "CREATOR";
      return;
    }
    if(v == LcdsInviteeState::DECLINED_e) {
      j = "DECLINED";
      return;
    }
    if(v == LcdsInviteeState::JOINED_e) {
      j = "JOINED";
      return;
    }
    if(v == LcdsInviteeState::KICKED_e) {
      j = "KICKED";
      return;
    }
    if(v == LcdsInviteeState::PENDING_e) {
      j = "PENDING";
      return;
    }
    if(v == LcdsInviteeState::QUIT_e) {
      j = "QUIT";
      return;
    }
  }
  inline void from_json(const json& j, LcdsInviteeState& v) {
    if(j.get<std::string>() == "ACCEPTED") {
      v = LcdsInviteeState::ACCEPTED_e;
      return;
    } 
    if(j.get<std::string>() == "ACCEPT_FAILED") {
      v = LcdsInviteeState::ACCEPT_FAILED_e;
      return;
    } 
    if(j.get<std::string>() == "BANNED") {
      v = LcdsInviteeState::BANNED_e;
      return;
    } 
    if(j.get<std::string>() == "CREATOR") {
      v = LcdsInviteeState::CREATOR_e;
      return;
    } 
    if(j.get<std::string>() == "DECLINED") {
      v = LcdsInviteeState::DECLINED_e;
      return;
    } 
    if(j.get<std::string>() == "JOINED") {
      v = LcdsInviteeState::JOINED_e;
      return;
    } 
    if(j.get<std::string>() == "KICKED") {
      v = LcdsInviteeState::KICKED_e;
      return;
    } 
    if(j.get<std::string>() == "PENDING") {
      v = LcdsInviteeState::PENDING_e;
      return;
    } 
    if(j.get<std::string>() == "QUIT") {
      v = LcdsInviteeState::QUIT_e;
      return;
    } 
  }
}
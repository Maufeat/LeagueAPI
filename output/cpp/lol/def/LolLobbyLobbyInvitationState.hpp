#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLobbyLobbyInvitationState {  
    Accepted_e = 2,
    Declined_e = 4,
    Error_e = 7,
    Joined_e = 3,
    Kicked_e = 5,
    OnHold_e = 6,
    Pending_e = 1,
    Requested_e = 0,
  };
  inline void to_json(json& j, const LolLobbyLobbyInvitationState& v) {
    if(v == LolLobbyLobbyInvitationState::Accepted_e) {
      j = "Accepted";
      return;
    }
    if(v == LolLobbyLobbyInvitationState::Declined_e) {
      j = "Declined";
      return;
    }
    if(v == LolLobbyLobbyInvitationState::Error_e) {
      j = "Error";
      return;
    }
    if(v == LolLobbyLobbyInvitationState::Joined_e) {
      j = "Joined";
      return;
    }
    if(v == LolLobbyLobbyInvitationState::Kicked_e) {
      j = "Kicked";
      return;
    }
    if(v == LolLobbyLobbyInvitationState::OnHold_e) {
      j = "OnHold";
      return;
    }
    if(v == LolLobbyLobbyInvitationState::Pending_e) {
      j = "Pending";
      return;
    }
    if(v == LolLobbyLobbyInvitationState::Requested_e) {
      j = "Requested";
      return;
    }
  }
  inline void from_json(const json& j, LolLobbyLobbyInvitationState& v) {
    if(j.get<std::string>() == "Accepted") {
      v = LolLobbyLobbyInvitationState::Accepted_e;
      return;
    } 
    if(j.get<std::string>() == "Declined") {
      v = LolLobbyLobbyInvitationState::Declined_e;
      return;
    } 
    if(j.get<std::string>() == "Error") {
      v = LolLobbyLobbyInvitationState::Error_e;
      return;
    } 
    if(j.get<std::string>() == "Joined") {
      v = LolLobbyLobbyInvitationState::Joined_e;
      return;
    } 
    if(j.get<std::string>() == "Kicked") {
      v = LolLobbyLobbyInvitationState::Kicked_e;
      return;
    } 
    if(j.get<std::string>() == "OnHold") {
      v = LolLobbyLobbyInvitationState::OnHold_e;
      return;
    } 
    if(j.get<std::string>() == "Pending") {
      v = LolLobbyLobbyInvitationState::Pending_e;
      return;
    } 
    if(j.get<std::string>() == "Requested") {
      v = LolLobbyLobbyInvitationState::Requested_e;
      return;
    } 
  }
}
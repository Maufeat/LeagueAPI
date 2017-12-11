#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyLobbyInvitationState { /**/ 
    Accepted_e = 2, /**/ 
    Declined_e = 4, /**/ 
    Error_e = 7, /**/ 
    Joined_e = 3, /**/ 
    Kicked_e = 5, /**/ 
    OnHold_e = 6, /**/ 
    Pending_e = 1, /**/ 
    Requested_e = 0, /**/ 
  };
  static void to_json(json& j, const LolLobbyLobbyInvitationState& v) {
    switch(v) { 
    case LolLobbyLobbyInvitationState::Accepted_e:
      j = "Accepted";
    break;
    case LolLobbyLobbyInvitationState::Declined_e:
      j = "Declined";
    break;
    case LolLobbyLobbyInvitationState::Error_e:
      j = "Error";
    break;
    case LolLobbyLobbyInvitationState::Joined_e:
      j = "Joined";
    break;
    case LolLobbyLobbyInvitationState::Kicked_e:
      j = "Kicked";
    break;
    case LolLobbyLobbyInvitationState::OnHold_e:
      j = "OnHold";
    break;
    case LolLobbyLobbyInvitationState::Pending_e:
      j = "Pending";
    break;
    case LolLobbyLobbyInvitationState::Requested_e:
      j = "Requested";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyLobbyInvitationState& v) {
    auto s = j.get<std::string>(); 
    if(s == "Accepted") {
      v = LolLobbyLobbyInvitationState::Accepted_e;
      return;
    } 
    if(s == "Declined") {
      v = LolLobbyLobbyInvitationState::Declined_e;
      return;
    } 
    if(s == "Error") {
      v = LolLobbyLobbyInvitationState::Error_e;
      return;
    } 
    if(s == "Joined") {
      v = LolLobbyLobbyInvitationState::Joined_e;
      return;
    } 
    if(s == "Kicked") {
      v = LolLobbyLobbyInvitationState::Kicked_e;
      return;
    } 
    if(s == "OnHold") {
      v = LolLobbyLobbyInvitationState::OnHold_e;
      return;
    } 
    if(s == "Pending") {
      v = LolLobbyLobbyInvitationState::Pending_e;
      return;
    } 
    if(s == "Requested") {
      v = LolLobbyLobbyInvitationState::Requested_e;
      return;
    } 
  }
} 
#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyInvitationType { /**/ 
    invalid_e = 0, /**/ 
    lobby_e = 1, /**/ 
    party_e = 2, /**/ 
  };
  static void to_json(json& j, const LolLobbyInvitationType& v) {
    switch(v) { 
    case LolLobbyInvitationType::invalid_e:
      j = "invalid";
    break;
    case LolLobbyInvitationType::lobby_e:
      j = "lobby";
    break;
    case LolLobbyInvitationType::party_e:
      j = "party";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyInvitationType& v) {
    auto s = j.get<std::string>(); 
    if(s == "invalid") {
      v = LolLobbyInvitationType::invalid_e;
      return;
    } 
    if(s == "lobby") {
      v = LolLobbyInvitationType::lobby_e;
      return;
    } 
    if(s == "party") {
      v = LolLobbyInvitationType::party_e;
      return;
    } 
  }
} 
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyInvitationType {  
    invalid_e = 0,
    lobby_e = 1,
    party_e = 2,
  };
  void to_json(json& j, const LolLobbyInvitationType& v) {
  if(v == LolLobbyInvitationType::invalid_e) {
    j = "invalid";
    return;
  }
  if(v == LolLobbyInvitationType::lobby_e) {
    j = "lobby";
    return;
  }
  if(v == LolLobbyInvitationType::party_e) {
    j = "party";
    return;
  }
  }
  void from_json(const json& j, LolLobbyInvitationType& v) {
  if(j.get<std::string>() == "invalid") {
    v = LolLobbyInvitationType::invalid_e;
    return;
  } 
  if(j.get<std::string>() == "lobby") {
    v = LolLobbyInvitationType::lobby_e;
    return;
  } 
  if(j.get<std::string>() == "party") {
    v = LolLobbyInvitationType::party_e;
    return;
  } 
  }
}
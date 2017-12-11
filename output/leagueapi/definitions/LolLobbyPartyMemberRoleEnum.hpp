#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyPartyMemberRoleEnum { /**/ 
    DECLINED_e = 5, /**/ 
    HOLD_e = 3, /**/ 
    INVITED_e = 2, /**/ 
    KICKED_e = 4, /**/ 
    LEADER_e = 0, /**/ 
    MEMBER_e = 1, /**/ 
  };
  static void to_json(json& j, const LolLobbyPartyMemberRoleEnum& v) {
    switch(v) { 
    case LolLobbyPartyMemberRoleEnum::DECLINED_e:
      j = "DECLINED";
    break;
    case LolLobbyPartyMemberRoleEnum::HOLD_e:
      j = "HOLD";
    break;
    case LolLobbyPartyMemberRoleEnum::INVITED_e:
      j = "INVITED";
    break;
    case LolLobbyPartyMemberRoleEnum::KICKED_e:
      j = "KICKED";
    break;
    case LolLobbyPartyMemberRoleEnum::LEADER_e:
      j = "LEADER";
    break;
    case LolLobbyPartyMemberRoleEnum::MEMBER_e:
      j = "MEMBER";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyPartyMemberRoleEnum& v) {
    auto s = j.get<std::string>(); 
    if(s == "DECLINED") {
      v = LolLobbyPartyMemberRoleEnum::DECLINED_e;
      return;
    } 
    if(s == "HOLD") {
      v = LolLobbyPartyMemberRoleEnum::HOLD_e;
      return;
    } 
    if(s == "INVITED") {
      v = LolLobbyPartyMemberRoleEnum::INVITED_e;
      return;
    } 
    if(s == "KICKED") {
      v = LolLobbyPartyMemberRoleEnum::KICKED_e;
      return;
    } 
    if(s == "LEADER") {
      v = LolLobbyPartyMemberRoleEnum::LEADER_e;
      return;
    } 
    if(s == "MEMBER") {
      v = LolLobbyPartyMemberRoleEnum::MEMBER_e;
      return;
    } 
  }
} 
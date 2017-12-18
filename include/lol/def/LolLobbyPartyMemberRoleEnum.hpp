#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLobbyPartyMemberRoleEnum {  
    DECLINED_e = 5,
    HOLD_e = 3,
    INVITED_e = 2,
    KICKED_e = 4,
    LEADER_e = 0,
    MEMBER_e = 1,
  };
  inline void to_json(json& j, const LolLobbyPartyMemberRoleEnum& v) {
    if(v == LolLobbyPartyMemberRoleEnum::DECLINED_e) {
      j = "DECLINED";
      return;
    }
    if(v == LolLobbyPartyMemberRoleEnum::HOLD_e) {
      j = "HOLD";
      return;
    }
    if(v == LolLobbyPartyMemberRoleEnum::INVITED_e) {
      j = "INVITED";
      return;
    }
    if(v == LolLobbyPartyMemberRoleEnum::KICKED_e) {
      j = "KICKED";
      return;
    }
    if(v == LolLobbyPartyMemberRoleEnum::LEADER_e) {
      j = "LEADER";
      return;
    }
    if(v == LolLobbyPartyMemberRoleEnum::MEMBER_e) {
      j = "MEMBER";
      return;
    }
  }
  inline void from_json(const json& j, LolLobbyPartyMemberRoleEnum& v) {
    if(j.get<std::string>() == "DECLINED") {
      v = LolLobbyPartyMemberRoleEnum::DECLINED_e;
      return;
    } 
    if(j.get<std::string>() == "HOLD") {
      v = LolLobbyPartyMemberRoleEnum::HOLD_e;
      return;
    } 
    if(j.get<std::string>() == "INVITED") {
      v = LolLobbyPartyMemberRoleEnum::INVITED_e;
      return;
    } 
    if(j.get<std::string>() == "KICKED") {
      v = LolLobbyPartyMemberRoleEnum::KICKED_e;
      return;
    } 
    if(j.get<std::string>() == "LEADER") {
      v = LolLobbyPartyMemberRoleEnum::LEADER_e;
      return;
    } 
    if(j.get<std::string>() == "MEMBER") {
      v = LolLobbyPartyMemberRoleEnum::MEMBER_e;
      return;
    } 
  }
}
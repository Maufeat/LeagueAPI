#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct ClubPermission {  
    DEMOTE_e = 2,
    INVITE_e = 0,
    KICK_MEMBER_e = 3,
    KICK_OFFICER_e = 4,
    NOMINATE_e = 6,
    OWNERSHIP_TRANSFER_e = 5,
    PROMOTE_e = 1,
    SET_DESCRIPTION_e = 8,
    SET_MOTD_e = 7,
  };
  inline void to_json(json& j, const ClubPermission& v) {
    if(v == ClubPermission::DEMOTE_e) {
      j = "DEMOTE";
      return;
    }
    if(v == ClubPermission::INVITE_e) {
      j = "INVITE";
      return;
    }
    if(v == ClubPermission::KICK_MEMBER_e) {
      j = "KICK_MEMBER";
      return;
    }
    if(v == ClubPermission::KICK_OFFICER_e) {
      j = "KICK_OFFICER";
      return;
    }
    if(v == ClubPermission::NOMINATE_e) {
      j = "NOMINATE";
      return;
    }
    if(v == ClubPermission::OWNERSHIP_TRANSFER_e) {
      j = "OWNERSHIP_TRANSFER";
      return;
    }
    if(v == ClubPermission::PROMOTE_e) {
      j = "PROMOTE";
      return;
    }
    if(v == ClubPermission::SET_DESCRIPTION_e) {
      j = "SET_DESCRIPTION";
      return;
    }
    if(v == ClubPermission::SET_MOTD_e) {
      j = "SET_MOTD";
      return;
    }
  }
  inline void from_json(const json& j, ClubPermission& v) {
    if(j.get<std::string>() == "DEMOTE") {
      v = ClubPermission::DEMOTE_e;
      return;
    } 
    if(j.get<std::string>() == "INVITE") {
      v = ClubPermission::INVITE_e;
      return;
    } 
    if(j.get<std::string>() == "KICK_MEMBER") {
      v = ClubPermission::KICK_MEMBER_e;
      return;
    } 
    if(j.get<std::string>() == "KICK_OFFICER") {
      v = ClubPermission::KICK_OFFICER_e;
      return;
    } 
    if(j.get<std::string>() == "NOMINATE") {
      v = ClubPermission::NOMINATE_e;
      return;
    } 
    if(j.get<std::string>() == "OWNERSHIP_TRANSFER") {
      v = ClubPermission::OWNERSHIP_TRANSFER_e;
      return;
    } 
    if(j.get<std::string>() == "PROMOTE") {
      v = ClubPermission::PROMOTE_e;
      return;
    } 
    if(j.get<std::string>() == "SET_DESCRIPTION") {
      v = ClubPermission::SET_DESCRIPTION_e;
      return;
    } 
    if(j.get<std::string>() == "SET_MOTD") {
      v = ClubPermission::SET_MOTD_e;
      return;
    } 
  }
}
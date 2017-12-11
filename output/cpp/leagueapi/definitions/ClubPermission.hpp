#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class ClubPermission { /**/ 
    DEMOTE_e = 2, /**/ 
    INVITE_e = 0, /**/ 
    KICK_MEMBER_e = 3, /**/ 
    KICK_OFFICER_e = 4, /**/ 
    NOMINATE_e = 6, /**/ 
    OWNERSHIP_TRANSFER_e = 5, /**/ 
    PROMOTE_e = 1, /**/ 
    SET_DESCRIPTION_e = 8, /**/ 
    SET_MOTD_e = 7, /**/ 
  };
  static void to_json(json& j, const ClubPermission& v) {
    switch(v) { 
    case ClubPermission::DEMOTE_e:
      j = "DEMOTE";
    break;
    case ClubPermission::INVITE_e:
      j = "INVITE";
    break;
    case ClubPermission::KICK_MEMBER_e:
      j = "KICK_MEMBER";
    break;
    case ClubPermission::KICK_OFFICER_e:
      j = "KICK_OFFICER";
    break;
    case ClubPermission::NOMINATE_e:
      j = "NOMINATE";
    break;
    case ClubPermission::OWNERSHIP_TRANSFER_e:
      j = "OWNERSHIP_TRANSFER";
    break;
    case ClubPermission::PROMOTE_e:
      j = "PROMOTE";
    break;
    case ClubPermission::SET_DESCRIPTION_e:
      j = "SET_DESCRIPTION";
    break;
    case ClubPermission::SET_MOTD_e:
      j = "SET_MOTD";
    break;
    };
  }
  static void from_json(const json& j, ClubPermission& v) {
    auto s = j.get<std::string>(); 
    if(s == "DEMOTE") {
      v = ClubPermission::DEMOTE_e;
      return;
    } 
    if(s == "INVITE") {
      v = ClubPermission::INVITE_e;
      return;
    } 
    if(s == "KICK_MEMBER") {
      v = ClubPermission::KICK_MEMBER_e;
      return;
    } 
    if(s == "KICK_OFFICER") {
      v = ClubPermission::KICK_OFFICER_e;
      return;
    } 
    if(s == "NOMINATE") {
      v = ClubPermission::NOMINATE_e;
      return;
    } 
    if(s == "OWNERSHIP_TRANSFER") {
      v = ClubPermission::OWNERSHIP_TRANSFER_e;
      return;
    } 
    if(s == "PROMOTE") {
      v = ClubPermission::PROMOTE_e;
      return;
    } 
    if(s == "SET_DESCRIPTION") {
      v = ClubPermission::SET_DESCRIPTION_e;
      return;
    } 
    if(s == "SET_MOTD") {
      v = ClubPermission::SET_MOTD_e;
      return;
    } 
  }
} 
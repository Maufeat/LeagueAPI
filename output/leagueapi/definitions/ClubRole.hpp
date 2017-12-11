#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class ClubRole { /**/ 
    INVITEE_e = 4, /**/ 
    MEMBER_e = 3, /**/ 
    NOMINEE_e = 5, /**/ 
    OFFICER_e = 2, /**/ 
    OWNER_e = 1, /**/ 
    UNKNOWN_e = 0, /**/ 
  };
  static void to_json(json& j, const ClubRole& v) {
    switch(v) { 
    case ClubRole::INVITEE_e:
      j = "INVITEE";
    break;
    case ClubRole::MEMBER_e:
      j = "MEMBER";
    break;
    case ClubRole::NOMINEE_e:
      j = "NOMINEE";
    break;
    case ClubRole::OFFICER_e:
      j = "OFFICER";
    break;
    case ClubRole::OWNER_e:
      j = "OWNER";
    break;
    case ClubRole::UNKNOWN_e:
      j = "UNKNOWN";
    break;
    };
  }
  static void from_json(const json& j, ClubRole& v) {
    auto s = j.get<std::string>(); 
    if(s == "INVITEE") {
      v = ClubRole::INVITEE_e;
      return;
    } 
    if(s == "MEMBER") {
      v = ClubRole::MEMBER_e;
      return;
    } 
    if(s == "NOMINEE") {
      v = ClubRole::NOMINEE_e;
      return;
    } 
    if(s == "OFFICER") {
      v = ClubRole::OFFICER_e;
      return;
    } 
    if(s == "OWNER") {
      v = ClubRole::OWNER_e;
      return;
    } 
    if(s == "UNKNOWN") {
      v = ClubRole::UNKNOWN_e;
      return;
    } 
  }
} 
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct ClubRole {  
    INVITEE_e = 4,
    MEMBER_e = 3,
    NOMINEE_e = 5,
    OFFICER_e = 2,
    OWNER_e = 1,
    UNKNOWN_e = 0,
  };
  inline void to_json(json& j, const ClubRole& v) {
    if(v == ClubRole::INVITEE_e) {
      j = "INVITEE";
      return;
    }
    if(v == ClubRole::MEMBER_e) {
      j = "MEMBER";
      return;
    }
    if(v == ClubRole::NOMINEE_e) {
      j = "NOMINEE";
      return;
    }
    if(v == ClubRole::OFFICER_e) {
      j = "OFFICER";
      return;
    }
    if(v == ClubRole::OWNER_e) {
      j = "OWNER";
      return;
    }
    if(v == ClubRole::UNKNOWN_e) {
      j = "UNKNOWN";
      return;
    }
  }
  inline void from_json(const json& j, ClubRole& v) {
    if(j.get<std::string>() == "INVITEE") {
      v = ClubRole::INVITEE_e;
      return;
    } 
    if(j.get<std::string>() == "MEMBER") {
      v = ClubRole::MEMBER_e;
      return;
    } 
    if(j.get<std::string>() == "NOMINEE") {
      v = ClubRole::NOMINEE_e;
      return;
    } 
    if(j.get<std::string>() == "OFFICER") {
      v = ClubRole::OFFICER_e;
      return;
    } 
    if(j.get<std::string>() == "OWNER") {
      v = ClubRole::OWNER_e;
      return;
    } 
    if(j.get<std::string>() == "UNKNOWN") {
      v = ClubRole::UNKNOWN_e;
      return;
    } 
  }
}
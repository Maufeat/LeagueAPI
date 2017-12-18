#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct ClubInviteStatus {  
    ACCEPTED_e = 1,
    BLOCKED_e = 3,
    PENDING_e = 0,
    REJECTED_e = 2,
  };
  inline void to_json(json& j, const ClubInviteStatus& v) {
    if(v == ClubInviteStatus::ACCEPTED_e) {
      j = "ACCEPTED";
      return;
    }
    if(v == ClubInviteStatus::BLOCKED_e) {
      j = "BLOCKED";
      return;
    }
    if(v == ClubInviteStatus::PENDING_e) {
      j = "PENDING";
      return;
    }
    if(v == ClubInviteStatus::REJECTED_e) {
      j = "REJECTED";
      return;
    }
  }
  inline void from_json(const json& j, ClubInviteStatus& v) {
    if(j.get<std::string>() == "ACCEPTED") {
      v = ClubInviteStatus::ACCEPTED_e;
      return;
    } 
    if(j.get<std::string>() == "BLOCKED") {
      v = ClubInviteStatus::BLOCKED_e;
      return;
    } 
    if(j.get<std::string>() == "PENDING") {
      v = ClubInviteStatus::PENDING_e;
      return;
    } 
    if(j.get<std::string>() == "REJECTED") {
      v = ClubInviteStatus::REJECTED_e;
      return;
    } 
  }
}
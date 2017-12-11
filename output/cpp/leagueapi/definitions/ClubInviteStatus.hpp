#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class ClubInviteStatus { /**/ 
    ACCEPTED_e = 1, /**/ 
    BLOCKED_e = 3, /**/ 
    PENDING_e = 0, /**/ 
    REJECTED_e = 2, /**/ 
  };
  static void to_json(json& j, const ClubInviteStatus& v) {
    switch(v) { 
    case ClubInviteStatus::ACCEPTED_e:
      j = "ACCEPTED";
    break;
    case ClubInviteStatus::BLOCKED_e:
      j = "BLOCKED";
    break;
    case ClubInviteStatus::PENDING_e:
      j = "PENDING";
    break;
    case ClubInviteStatus::REJECTED_e:
      j = "REJECTED";
    break;
    };
  }
  static void from_json(const json& j, ClubInviteStatus& v) {
    auto s = j.get<std::string>(); 
    if(s == "ACCEPTED") {
      v = ClubInviteStatus::ACCEPTED_e;
      return;
    } 
    if(s == "BLOCKED") {
      v = ClubInviteStatus::BLOCKED_e;
      return;
    } 
    if(s == "PENDING") {
      v = ClubInviteStatus::PENDING_e;
      return;
    } 
    if(s == "REJECTED") {
      v = ClubInviteStatus::REJECTED_e;
      return;
    } 
  }
} 
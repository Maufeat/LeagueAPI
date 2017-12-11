#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashRosterMemberState { /**/ 
    FORCED_NOT_READY_e = 2, /**/ 
    NOT_READY_e = 1, /**/ 
    PENDING_e = 0, /**/ 
    READY_e = 3, /**/ 
  };
  static void to_json(json& j, const LolClashRosterMemberState& v) {
    switch(v) { 
    case LolClashRosterMemberState::FORCED_NOT_READY_e:
      j = "FORCED_NOT_READY";
    break;
    case LolClashRosterMemberState::NOT_READY_e:
      j = "NOT_READY";
    break;
    case LolClashRosterMemberState::PENDING_e:
      j = "PENDING";
    break;
    case LolClashRosterMemberState::READY_e:
      j = "READY";
    break;
    };
  }
  static void from_json(const json& j, LolClashRosterMemberState& v) {
    auto s = j.get<std::string>(); 
    if(s == "FORCED_NOT_READY") {
      v = LolClashRosterMemberState::FORCED_NOT_READY_e;
      return;
    } 
    if(s == "NOT_READY") {
      v = LolClashRosterMemberState::NOT_READY_e;
      return;
    } 
    if(s == "PENDING") {
      v = LolClashRosterMemberState::PENDING_e;
      return;
    } 
    if(s == "READY") {
      v = LolClashRosterMemberState::READY_e;
      return;
    } 
  }
} 
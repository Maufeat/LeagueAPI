#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class SubState { /**/ 
    DECLINED_e = 2, /**/ 
    FORCED_NOT_READY_e = 5, /**/ 
    NOT_READY_e = 4, /**/ 
    PENDING_e = 1, /**/ 
    READY_e = 6, /**/ 
    REVOKED_e = 3, /**/ 
    SUGGESTED_e = 0, /**/ 
  };
  static void to_json(json& j, const SubState& v) {
    switch(v) { 
    case SubState::DECLINED_e:
      j = "DECLINED";
    break;
    case SubState::FORCED_NOT_READY_e:
      j = "FORCED_NOT_READY";
    break;
    case SubState::NOT_READY_e:
      j = "NOT_READY";
    break;
    case SubState::PENDING_e:
      j = "PENDING";
    break;
    case SubState::READY_e:
      j = "READY";
    break;
    case SubState::REVOKED_e:
      j = "REVOKED";
    break;
    case SubState::SUGGESTED_e:
      j = "SUGGESTED";
    break;
    };
  }
  static void from_json(const json& j, SubState& v) {
    auto s = j.get<std::string>(); 
    if(s == "DECLINED") {
      v = SubState::DECLINED_e;
      return;
    } 
    if(s == "FORCED_NOT_READY") {
      v = SubState::FORCED_NOT_READY_e;
      return;
    } 
    if(s == "NOT_READY") {
      v = SubState::NOT_READY_e;
      return;
    } 
    if(s == "PENDING") {
      v = SubState::PENDING_e;
      return;
    } 
    if(s == "READY") {
      v = SubState::READY_e;
      return;
    } 
    if(s == "REVOKED") {
      v = SubState::REVOKED_e;
      return;
    } 
    if(s == "SUGGESTED") {
      v = SubState::SUGGESTED_e;
      return;
    } 
  }
} 
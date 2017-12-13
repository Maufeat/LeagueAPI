#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct SubState {  
    DECLINED_e = 2,
    FORCED_NOT_READY_e = 5,
    NOT_READY_e = 4,
    PENDING_e = 1,
    READY_e = 6,
    REVOKED_e = 3,
    SUGGESTED_e = 0,
  };
  void to_json(json& j, const SubState& v) {
    if(v == SubState::DECLINED_e) {
      j = "DECLINED";
      return;
    }
    if(v == SubState::FORCED_NOT_READY_e) {
      j = "FORCED_NOT_READY";
      return;
    }
    if(v == SubState::NOT_READY_e) {
      j = "NOT_READY";
      return;
    }
    if(v == SubState::PENDING_e) {
      j = "PENDING";
      return;
    }
    if(v == SubState::READY_e) {
      j = "READY";
      return;
    }
    if(v == SubState::REVOKED_e) {
      j = "REVOKED";
      return;
    }
    if(v == SubState::SUGGESTED_e) {
      j = "SUGGESTED";
      return;
    }
  }
  void from_json(const json& j, SubState& v) {
    if(j.get<std::string>() == "DECLINED") {
      v = SubState::DECLINED_e;
      return;
    } 
    if(j.get<std::string>() == "FORCED_NOT_READY") {
      v = SubState::FORCED_NOT_READY_e;
      return;
    } 
    if(j.get<std::string>() == "NOT_READY") {
      v = SubState::NOT_READY_e;
      return;
    } 
    if(j.get<std::string>() == "PENDING") {
      v = SubState::PENDING_e;
      return;
    } 
    if(j.get<std::string>() == "READY") {
      v = SubState::READY_e;
      return;
    } 
    if(j.get<std::string>() == "REVOKED") {
      v = SubState::REVOKED_e;
      return;
    } 
    if(j.get<std::string>() == "SUGGESTED") {
      v = SubState::SUGGESTED_e;
      return;
    } 
  }
}
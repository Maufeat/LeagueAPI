#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolPlayerBehaviorPlayerBehavior_LoginSessionState {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_LoginSessionState& v) {
    if(v == LolPlayerBehaviorPlayerBehavior_LoginSessionState::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolPlayerBehaviorPlayerBehavior_LoginSessionState::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolPlayerBehaviorPlayerBehavior_LoginSessionState::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolPlayerBehaviorPlayerBehavior_LoginSessionState::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_LoginSessionState& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState::SUCCEEDED_e;
      return;
    } 
  }
}
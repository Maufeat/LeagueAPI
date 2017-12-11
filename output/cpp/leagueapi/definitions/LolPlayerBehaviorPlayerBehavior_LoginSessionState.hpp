#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolPlayerBehaviorPlayerBehavior_LoginSessionState { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_LoginSessionState& v) {
    switch(v) { 
    case LolPlayerBehaviorPlayerBehavior_LoginSessionState::ERROR_e:
      j = "ERROR";
    break;
    case LolPlayerBehaviorPlayerBehavior_LoginSessionState::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolPlayerBehaviorPlayerBehavior_LoginSessionState::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolPlayerBehaviorPlayerBehavior_LoginSessionState::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_LoginSessionState& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState::SUCCEEDED_e;
      return;
    } 
  }
} 
#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolMatchmakingLoginSessionState { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolMatchmakingLoginSessionState& v) {
    switch(v) { 
    case LolMatchmakingLoginSessionState::ERROR_e:
      j = "ERROR";
    break;
    case LolMatchmakingLoginSessionState::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolMatchmakingLoginSessionState::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolMatchmakingLoginSessionState::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolMatchmakingLoginSessionState& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolMatchmakingLoginSessionState::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolMatchmakingLoginSessionState::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolMatchmakingLoginSessionState::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolMatchmakingLoginSessionState::SUCCEEDED_e;
      return;
    } 
  }
} 
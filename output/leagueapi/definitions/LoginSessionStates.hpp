#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LoginSessionStates& v) {
    switch(v) { 
    case LoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case LoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
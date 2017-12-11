#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLoadoutsLoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolLoadoutsLoginSessionStates& v) {
    switch(v) { 
    case LolLoadoutsLoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case LolLoadoutsLoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolLoadoutsLoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolLoadoutsLoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolLoadoutsLoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolLoadoutsLoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolLoadoutsLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolLoadoutsLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolLoadoutsLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
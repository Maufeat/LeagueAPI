#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLoadoutsLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolLoadoutsLoginSessionStates& v) {
    if(v == LolLoadoutsLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolLoadoutsLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolLoadoutsLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolLoadoutsLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolLoadoutsLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolLoadoutsLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolLoadoutsLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolLoadoutsLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolLoadoutsLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
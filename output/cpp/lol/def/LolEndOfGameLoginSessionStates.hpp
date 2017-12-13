#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolEndOfGameLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  void to_json(json& j, const LolEndOfGameLoginSessionStates& v) {
    if(v == LolEndOfGameLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolEndOfGameLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolEndOfGameLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolEndOfGameLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  void from_json(const json& j, LolEndOfGameLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolEndOfGameLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolEndOfGameLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolEndOfGameLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolEndOfGameLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
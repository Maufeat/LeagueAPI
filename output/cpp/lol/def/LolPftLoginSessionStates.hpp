#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolPftLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolPftLoginSessionStates& v) {
    if(v == LolPftLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolPftLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolPftLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolPftLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolPftLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolPftLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolPftLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolPftLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolPftLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
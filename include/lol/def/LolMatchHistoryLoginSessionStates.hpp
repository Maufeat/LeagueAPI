#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolMatchHistoryLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolMatchHistoryLoginSessionStates& v) {
    if(v == LolMatchHistoryLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolMatchHistoryLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolMatchHistoryLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolMatchHistoryLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolMatchHistoryLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolMatchHistoryLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolMatchHistoryLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolMatchHistoryLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolMatchHistoryLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolGameQueuesLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolGameQueuesLoginSessionStates& v) {
    if(v == LolGameQueuesLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolGameQueuesLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolGameQueuesLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolGameQueuesLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolGameQueuesLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolGameQueuesLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolGameQueuesLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolGameQueuesLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolGameQueuesLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolQueueEligibilityLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolQueueEligibilityLoginSessionStates& v) {
    if(v == LolQueueEligibilityLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolQueueEligibilityLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolQueueEligibilityLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolQueueEligibilityLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolQueueEligibilityLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolQueueEligibilityLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolQueueEligibilityLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolQueueEligibilityLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolQueueEligibilityLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
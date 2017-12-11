#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolQueueEligibilityLoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolQueueEligibilityLoginSessionStates& v) {
    switch(v) { 
    case LolQueueEligibilityLoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case LolQueueEligibilityLoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolQueueEligibilityLoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolQueueEligibilityLoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolQueueEligibilityLoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolQueueEligibilityLoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolQueueEligibilityLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolQueueEligibilityLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolQueueEligibilityLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
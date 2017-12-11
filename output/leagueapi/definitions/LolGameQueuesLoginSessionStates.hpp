#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolGameQueuesLoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolGameQueuesLoginSessionStates& v) {
    switch(v) { 
    case LolGameQueuesLoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case LolGameQueuesLoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolGameQueuesLoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolGameQueuesLoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolGameQueuesLoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolGameQueuesLoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolGameQueuesLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolGameQueuesLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolGameQueuesLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class RecofrienderLoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const RecofrienderLoginSessionStates& v) {
    switch(v) { 
    case RecofrienderLoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case RecofrienderLoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case RecofrienderLoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case RecofrienderLoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, RecofrienderLoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = RecofrienderLoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = RecofrienderLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = RecofrienderLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = RecofrienderLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
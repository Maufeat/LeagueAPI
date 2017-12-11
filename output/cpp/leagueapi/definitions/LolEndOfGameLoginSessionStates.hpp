#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolEndOfGameLoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolEndOfGameLoginSessionStates& v) {
    switch(v) { 
    case LolEndOfGameLoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case LolEndOfGameLoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolEndOfGameLoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolEndOfGameLoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolEndOfGameLoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolEndOfGameLoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolEndOfGameLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolEndOfGameLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolEndOfGameLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolMatchHistoryLoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolMatchHistoryLoginSessionStates& v) {
    switch(v) { 
    case LolMatchHistoryLoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case LolMatchHistoryLoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolMatchHistoryLoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolMatchHistoryLoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolMatchHistoryLoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolMatchHistoryLoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolMatchHistoryLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolMatchHistoryLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolMatchHistoryLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
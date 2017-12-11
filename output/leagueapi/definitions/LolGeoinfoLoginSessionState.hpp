#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolGeoinfoLoginSessionState { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolGeoinfoLoginSessionState& v) {
    switch(v) { 
    case LolGeoinfoLoginSessionState::ERROR_e:
      j = "ERROR";
    break;
    case LolGeoinfoLoginSessionState::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolGeoinfoLoginSessionState::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolGeoinfoLoginSessionState::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolGeoinfoLoginSessionState& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolGeoinfoLoginSessionState::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolGeoinfoLoginSessionState::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolGeoinfoLoginSessionState::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolGeoinfoLoginSessionState::SUCCEEDED_e;
      return;
    } 
  }
} 
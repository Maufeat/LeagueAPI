#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashLoginSessionState { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolClashLoginSessionState& v) {
    switch(v) { 
    case LolClashLoginSessionState::ERROR_e:
      j = "ERROR";
    break;
    case LolClashLoginSessionState::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolClashLoginSessionState::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolClashLoginSessionState::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolClashLoginSessionState& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolClashLoginSessionState::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolClashLoginSessionState::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolClashLoginSessionState::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolClashLoginSessionState::SUCCEEDED_e;
      return;
    } 
  }
} 
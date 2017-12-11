#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolAccountVerificationLoginSessionState { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolAccountVerificationLoginSessionState& v) {
    switch(v) { 
    case LolAccountVerificationLoginSessionState::ERROR_e:
      j = "ERROR";
    break;
    case LolAccountVerificationLoginSessionState::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolAccountVerificationLoginSessionState::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolAccountVerificationLoginSessionState::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolAccountVerificationLoginSessionState& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolAccountVerificationLoginSessionState::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolAccountVerificationLoginSessionState::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolAccountVerificationLoginSessionState::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolAccountVerificationLoginSessionState::SUCCEEDED_e;
      return;
    } 
  }
} 
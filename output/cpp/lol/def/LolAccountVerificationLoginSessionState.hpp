#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolAccountVerificationLoginSessionState {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolAccountVerificationLoginSessionState& v) {
    if(v == LolAccountVerificationLoginSessionState::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolAccountVerificationLoginSessionState::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolAccountVerificationLoginSessionState::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolAccountVerificationLoginSessionState::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolAccountVerificationLoginSessionState& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolAccountVerificationLoginSessionState::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolAccountVerificationLoginSessionState::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolAccountVerificationLoginSessionState::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolAccountVerificationLoginSessionState::SUCCEEDED_e;
      return;
    } 
  }
}
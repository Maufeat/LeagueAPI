#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolClashLoginSessionState {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  void to_json(json& j, const LolClashLoginSessionState& v) {
  if(v == LolClashLoginSessionState::ERROR_e) {
    j = "ERROR";
    return;
  }
  if(v == LolClashLoginSessionState::IN_PROGRESS_e) {
    j = "IN_PROGRESS";
    return;
  }
  if(v == LolClashLoginSessionState::LOGGING_OUT_e) {
    j = "LOGGING_OUT";
    return;
  }
  if(v == LolClashLoginSessionState::SUCCEEDED_e) {
    j = "SUCCEEDED";
    return;
  }
  }
  void from_json(const json& j, LolClashLoginSessionState& v) {
  if(j.get<std::string>() == "ERROR") {
    v = LolClashLoginSessionState::ERROR_e;
    return;
  } 
  if(j.get<std::string>() == "IN_PROGRESS") {
    v = LolClashLoginSessionState::IN_PROGRESS_e;
    return;
  } 
  if(j.get<std::string>() == "LOGGING_OUT") {
    v = LolClashLoginSessionState::LOGGING_OUT_e;
    return;
  } 
  if(j.get<std::string>() == "SUCCEEDED") {
    v = LolClashLoginSessionState::SUCCEEDED_e;
    return;
  } 
  }
}
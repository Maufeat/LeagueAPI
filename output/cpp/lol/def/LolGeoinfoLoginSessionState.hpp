#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolGeoinfoLoginSessionState {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  void to_json(json& j, const LolGeoinfoLoginSessionState& v) {
  if(v == LolGeoinfoLoginSessionState::ERROR_e) {
    j = "ERROR";
    return;
  }
  if(v == LolGeoinfoLoginSessionState::IN_PROGRESS_e) {
    j = "IN_PROGRESS";
    return;
  }
  if(v == LolGeoinfoLoginSessionState::LOGGING_OUT_e) {
    j = "LOGGING_OUT";
    return;
  }
  if(v == LolGeoinfoLoginSessionState::SUCCEEDED_e) {
    j = "SUCCEEDED";
    return;
  }
  }
  void from_json(const json& j, LolGeoinfoLoginSessionState& v) {
  if(j.get<std::string>() == "ERROR") {
    v = LolGeoinfoLoginSessionState::ERROR_e;
    return;
  } 
  if(j.get<std::string>() == "IN_PROGRESS") {
    v = LolGeoinfoLoginSessionState::IN_PROGRESS_e;
    return;
  } 
  if(j.get<std::string>() == "LOGGING_OUT") {
    v = LolGeoinfoLoginSessionState::LOGGING_OUT_e;
    return;
  } 
  if(j.get<std::string>() == "SUCCEEDED") {
    v = LolGeoinfoLoginSessionState::SUCCEEDED_e;
    return;
  } 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLoginLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  void to_json(json& j, const LolLoginLoginSessionStates& v) {
  if(v == LolLoginLoginSessionStates::ERROR_e) {
    j = "ERROR";
    return;
  }
  if(v == LolLoginLoginSessionStates::IN_PROGRESS_e) {
    j = "IN_PROGRESS";
    return;
  }
  if(v == LolLoginLoginSessionStates::LOGGING_OUT_e) {
    j = "LOGGING_OUT";
    return;
  }
  if(v == LolLoginLoginSessionStates::SUCCEEDED_e) {
    j = "SUCCEEDED";
    return;
  }
  }
  void from_json(const json& j, LolLoginLoginSessionStates& v) {
  if(j.get<std::string>() == "ERROR") {
    v = LolLoginLoginSessionStates::ERROR_e;
    return;
  } 
  if(j.get<std::string>() == "IN_PROGRESS") {
    v = LolLoginLoginSessionStates::IN_PROGRESS_e;
    return;
  } 
  if(j.get<std::string>() == "LOGGING_OUT") {
    v = LolLoginLoginSessionStates::LOGGING_OUT_e;
    return;
  } 
  if(j.get<std::string>() == "SUCCEEDED") {
    v = LolLoginLoginSessionStates::SUCCEEDED_e;
    return;
  } 
  }
}
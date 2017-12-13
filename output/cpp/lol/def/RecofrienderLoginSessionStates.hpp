#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct RecofrienderLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  void to_json(json& j, const RecofrienderLoginSessionStates& v) {
  if(v == RecofrienderLoginSessionStates::ERROR_e) {
    j = "ERROR";
    return;
  }
  if(v == RecofrienderLoginSessionStates::IN_PROGRESS_e) {
    j = "IN_PROGRESS";
    return;
  }
  if(v == RecofrienderLoginSessionStates::LOGGING_OUT_e) {
    j = "LOGGING_OUT";
    return;
  }
  if(v == RecofrienderLoginSessionStates::SUCCEEDED_e) {
    j = "SUCCEEDED";
    return;
  }
  }
  void from_json(const json& j, RecofrienderLoginSessionStates& v) {
  if(j.get<std::string>() == "ERROR") {
    v = RecofrienderLoginSessionStates::ERROR_e;
    return;
  } 
  if(j.get<std::string>() == "IN_PROGRESS") {
    v = RecofrienderLoginSessionStates::IN_PROGRESS_e;
    return;
  } 
  if(j.get<std::string>() == "LOGGING_OUT") {
    v = RecofrienderLoginSessionStates::LOGGING_OUT_e;
    return;
  } 
  if(j.get<std::string>() == "SUCCEEDED") {
    v = RecofrienderLoginSessionStates::SUCCEEDED_e;
    return;
  } 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolPerksLoginSessionState {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  void to_json(json& j, const LolPerksLoginSessionState& v) {
  if(v == LolPerksLoginSessionState::ERROR_e) {
    j = "ERROR";
    return;
  }
  if(v == LolPerksLoginSessionState::IN_PROGRESS_e) {
    j = "IN_PROGRESS";
    return;
  }
  if(v == LolPerksLoginSessionState::LOGGING_OUT_e) {
    j = "LOGGING_OUT";
    return;
  }
  if(v == LolPerksLoginSessionState::SUCCEEDED_e) {
    j = "SUCCEEDED";
    return;
  }
  }
  void from_json(const json& j, LolPerksLoginSessionState& v) {
  if(j.get<std::string>() == "ERROR") {
    v = LolPerksLoginSessionState::ERROR_e;
    return;
  } 
  if(j.get<std::string>() == "IN_PROGRESS") {
    v = LolPerksLoginSessionState::IN_PROGRESS_e;
    return;
  } 
  if(j.get<std::string>() == "LOGGING_OUT") {
    v = LolPerksLoginSessionState::LOGGING_OUT_e;
    return;
  } 
  if(j.get<std::string>() == "SUCCEEDED") {
    v = LolPerksLoginSessionState::SUCCEEDED_e;
    return;
  } 
  }
}
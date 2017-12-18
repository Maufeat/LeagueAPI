#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolInventoryLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolInventoryLoginSessionStates& v) {
    if(v == LolInventoryLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolInventoryLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolInventoryLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolInventoryLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolInventoryLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolInventoryLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolInventoryLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolInventoryLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolInventoryLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
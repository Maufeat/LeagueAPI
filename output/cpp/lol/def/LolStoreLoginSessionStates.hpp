#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolStoreLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolStoreLoginSessionStates& v) {
    if(v == LolStoreLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolStoreLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolStoreLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolStoreLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolStoreLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolStoreLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolStoreLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolStoreLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolStoreLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
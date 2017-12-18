#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolSettingsLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolSettingsLoginSessionStates& v) {
    if(v == LolSettingsLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolSettingsLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolSettingsLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolSettingsLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolSettingsLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolSettingsLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolSettingsLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolSettingsLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolSettingsLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
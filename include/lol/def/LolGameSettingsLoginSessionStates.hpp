#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolGameSettingsLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolGameSettingsLoginSessionStates& v) {
    if(v == LolGameSettingsLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolGameSettingsLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolGameSettingsLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolGameSettingsLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolGameSettingsLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolGameSettingsLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolGameSettingsLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolGameSettingsLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolGameSettingsLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
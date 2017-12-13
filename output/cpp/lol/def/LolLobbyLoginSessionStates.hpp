#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  void to_json(json& j, const LolLobbyLoginSessionStates& v) {
    if(v == LolLobbyLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolLobbyLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolLobbyLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolLobbyLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  void from_json(const json& j, LolLobbyLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolLobbyLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolLobbyLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolLobbyLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolLobbyLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
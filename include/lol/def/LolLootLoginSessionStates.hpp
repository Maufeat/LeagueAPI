#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLootLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolLootLoginSessionStates& v) {
    if(v == LolLootLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolLootLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolLootLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolLootLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolLootLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolLootLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolLootLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolLootLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolLootLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
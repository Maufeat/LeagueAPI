#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolItemSetsLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolItemSetsLoginSessionStates& v) {
    if(v == LolItemSetsLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolItemSetsLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolItemSetsLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolItemSetsLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolItemSetsLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolItemSetsLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolItemSetsLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolItemSetsLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolItemSetsLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
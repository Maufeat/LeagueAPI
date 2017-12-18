#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolCollectionsLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolCollectionsLoginSessionStates& v) {
    if(v == LolCollectionsLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolCollectionsLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolCollectionsLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolCollectionsLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolCollectionsLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolCollectionsLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolCollectionsLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolCollectionsLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolCollectionsLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
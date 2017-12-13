#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolPersonalizedOffersLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  void to_json(json& j, const LolPersonalizedOffersLoginSessionStates& v) {
  if(v == LolPersonalizedOffersLoginSessionStates::ERROR_e) {
    j = "ERROR";
    return;
  }
  if(v == LolPersonalizedOffersLoginSessionStates::IN_PROGRESS_e) {
    j = "IN_PROGRESS";
    return;
  }
  if(v == LolPersonalizedOffersLoginSessionStates::LOGGING_OUT_e) {
    j = "LOGGING_OUT";
    return;
  }
  if(v == LolPersonalizedOffersLoginSessionStates::SUCCEEDED_e) {
    j = "SUCCEEDED";
    return;
  }
  }
  void from_json(const json& j, LolPersonalizedOffersLoginSessionStates& v) {
  if(j.get<std::string>() == "ERROR") {
    v = LolPersonalizedOffersLoginSessionStates::ERROR_e;
    return;
  } 
  if(j.get<std::string>() == "IN_PROGRESS") {
    v = LolPersonalizedOffersLoginSessionStates::IN_PROGRESS_e;
    return;
  } 
  if(j.get<std::string>() == "LOGGING_OUT") {
    v = LolPersonalizedOffersLoginSessionStates::LOGGING_OUT_e;
    return;
  } 
  if(j.get<std::string>() == "SUCCEEDED") {
    v = LolPersonalizedOffersLoginSessionStates::SUCCEEDED_e;
    return;
  } 
  }
}
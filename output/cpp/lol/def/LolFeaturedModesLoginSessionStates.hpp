#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolFeaturedModesLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  void to_json(json& j, const LolFeaturedModesLoginSessionStates& v) {
  if(v == LolFeaturedModesLoginSessionStates::ERROR_e) {
    j = "ERROR";
    return;
  }
  if(v == LolFeaturedModesLoginSessionStates::IN_PROGRESS_e) {
    j = "IN_PROGRESS";
    return;
  }
  if(v == LolFeaturedModesLoginSessionStates::LOGGING_OUT_e) {
    j = "LOGGING_OUT";
    return;
  }
  if(v == LolFeaturedModesLoginSessionStates::SUCCEEDED_e) {
    j = "SUCCEEDED";
    return;
  }
  }
  void from_json(const json& j, LolFeaturedModesLoginSessionStates& v) {
  if(j.get<std::string>() == "ERROR") {
    v = LolFeaturedModesLoginSessionStates::ERROR_e;
    return;
  } 
  if(j.get<std::string>() == "IN_PROGRESS") {
    v = LolFeaturedModesLoginSessionStates::IN_PROGRESS_e;
    return;
  } 
  if(j.get<std::string>() == "LOGGING_OUT") {
    v = LolFeaturedModesLoginSessionStates::LOGGING_OUT_e;
    return;
  } 
  if(j.get<std::string>() == "SUCCEEDED") {
    v = LolFeaturedModesLoginSessionStates::SUCCEEDED_e;
    return;
  } 
  }
}
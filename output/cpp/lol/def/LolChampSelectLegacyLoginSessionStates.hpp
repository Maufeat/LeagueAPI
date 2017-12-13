#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolChampSelectLegacyLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  void to_json(json& j, const LolChampSelectLegacyLoginSessionStates& v) {
  if(v == LolChampSelectLegacyLoginSessionStates::ERROR_e) {
    j = "ERROR";
    return;
  }
  if(v == LolChampSelectLegacyLoginSessionStates::IN_PROGRESS_e) {
    j = "IN_PROGRESS";
    return;
  }
  if(v == LolChampSelectLegacyLoginSessionStates::LOGGING_OUT_e) {
    j = "LOGGING_OUT";
    return;
  }
  if(v == LolChampSelectLegacyLoginSessionStates::SUCCEEDED_e) {
    j = "SUCCEEDED";
    return;
  }
  }
  void from_json(const json& j, LolChampSelectLegacyLoginSessionStates& v) {
  if(j.get<std::string>() == "ERROR") {
    v = LolChampSelectLegacyLoginSessionStates::ERROR_e;
    return;
  } 
  if(j.get<std::string>() == "IN_PROGRESS") {
    v = LolChampSelectLegacyLoginSessionStates::IN_PROGRESS_e;
    return;
  } 
  if(j.get<std::string>() == "LOGGING_OUT") {
    v = LolChampSelectLegacyLoginSessionStates::LOGGING_OUT_e;
    return;
  } 
  if(j.get<std::string>() == "SUCCEEDED") {
    v = LolChampSelectLegacyLoginSessionStates::SUCCEEDED_e;
    return;
  } 
  }
}
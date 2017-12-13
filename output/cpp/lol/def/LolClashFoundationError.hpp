#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolClashFoundationError {  
    CLASH_DISABLED_e = 1,
    CLASH_NOT_INITIALIZED_e = 0,
    DESERIALIZATION_FAILED_e = 2,
    GAMEFLOW_UNAVAILABLE_e = 3,
  };
  void to_json(json& j, const LolClashFoundationError& v) {
    if(v == LolClashFoundationError::CLASH_DISABLED_e) {
      j = "CLASH_DISABLED";
      return;
    }
    if(v == LolClashFoundationError::CLASH_NOT_INITIALIZED_e) {
      j = "CLASH_NOT_INITIALIZED";
      return;
    }
    if(v == LolClashFoundationError::DESERIALIZATION_FAILED_e) {
      j = "DESERIALIZATION_FAILED";
      return;
    }
    if(v == LolClashFoundationError::GAMEFLOW_UNAVAILABLE_e) {
      j = "GAMEFLOW_UNAVAILABLE";
      return;
    }
  }
  void from_json(const json& j, LolClashFoundationError& v) {
    if(j.get<std::string>() == "CLASH_DISABLED") {
      v = LolClashFoundationError::CLASH_DISABLED_e;
      return;
    } 
    if(j.get<std::string>() == "CLASH_NOT_INITIALIZED") {
      v = LolClashFoundationError::CLASH_NOT_INITIALIZED_e;
      return;
    } 
    if(j.get<std::string>() == "DESERIALIZATION_FAILED") {
      v = LolClashFoundationError::DESERIALIZATION_FAILED_e;
      return;
    } 
    if(j.get<std::string>() == "GAMEFLOW_UNAVAILABLE") {
      v = LolClashFoundationError::GAMEFLOW_UNAVAILABLE_e;
      return;
    } 
  }
}
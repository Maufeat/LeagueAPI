#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashFoundationError { /**/ 
    CLASH_DISABLED_e = 1, /**/ 
    CLASH_NOT_INITIALIZED_e = 0, /**/ 
    DESERIALIZATION_FAILED_e = 2, /**/ 
    GAMEFLOW_UNAVAILABLE_e = 3, /**/ 
  };
  static void to_json(json& j, const LolClashFoundationError& v) {
    switch(v) { 
    case LolClashFoundationError::CLASH_DISABLED_e:
      j = "CLASH_DISABLED";
    break;
    case LolClashFoundationError::CLASH_NOT_INITIALIZED_e:
      j = "CLASH_NOT_INITIALIZED";
    break;
    case LolClashFoundationError::DESERIALIZATION_FAILED_e:
      j = "DESERIALIZATION_FAILED";
    break;
    case LolClashFoundationError::GAMEFLOW_UNAVAILABLE_e:
      j = "GAMEFLOW_UNAVAILABLE";
    break;
    };
  }
  static void from_json(const json& j, LolClashFoundationError& v) {
    auto s = j.get<std::string>(); 
    if(s == "CLASH_DISABLED") {
      v = LolClashFoundationError::CLASH_DISABLED_e;
      return;
    } 
    if(s == "CLASH_NOT_INITIALIZED") {
      v = LolClashFoundationError::CLASH_NOT_INITIALIZED_e;
      return;
    } 
    if(s == "DESERIALIZATION_FAILED") {
      v = LolClashFoundationError::DESERIALIZATION_FAILED_e;
      return;
    } 
    if(s == "GAMEFLOW_UNAVAILABLE") {
      v = LolClashFoundationError::GAMEFLOW_UNAVAILABLE_e;
      return;
    } 
  }
} 
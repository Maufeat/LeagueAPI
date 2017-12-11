#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolSettingsLoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolSettingsLoginSessionStates& v) {
    switch(v) { 
    case LolSettingsLoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case LolSettingsLoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolSettingsLoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolSettingsLoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolSettingsLoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolSettingsLoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolSettingsLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolSettingsLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolSettingsLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
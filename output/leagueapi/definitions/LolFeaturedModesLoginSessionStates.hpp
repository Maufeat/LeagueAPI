#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolFeaturedModesLoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolFeaturedModesLoginSessionStates& v) {
    switch(v) { 
    case LolFeaturedModesLoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case LolFeaturedModesLoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolFeaturedModesLoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolFeaturedModesLoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolFeaturedModesLoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolFeaturedModesLoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolFeaturedModesLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolFeaturedModesLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolFeaturedModesLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
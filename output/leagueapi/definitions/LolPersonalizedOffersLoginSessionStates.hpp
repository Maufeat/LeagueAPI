#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolPersonalizedOffersLoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolPersonalizedOffersLoginSessionStates& v) {
    switch(v) { 
    case LolPersonalizedOffersLoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case LolPersonalizedOffersLoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolPersonalizedOffersLoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolPersonalizedOffersLoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolPersonalizedOffersLoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolPersonalizedOffersLoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolPersonalizedOffersLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolPersonalizedOffersLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolPersonalizedOffersLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
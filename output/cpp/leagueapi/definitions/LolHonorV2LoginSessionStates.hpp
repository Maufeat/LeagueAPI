#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolHonorV2LoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolHonorV2LoginSessionStates& v) {
    switch(v) { 
    case LolHonorV2LoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case LolHonorV2LoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolHonorV2LoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolHonorV2LoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolHonorV2LoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolHonorV2LoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolHonorV2LoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolHonorV2LoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolHonorV2LoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
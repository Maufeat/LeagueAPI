#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolChampSelectLegacyLoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolChampSelectLegacyLoginSessionStates& v) {
    switch(v) { 
    case LolChampSelectLegacyLoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case LolChampSelectLegacyLoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolChampSelectLegacyLoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolChampSelectLegacyLoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolChampSelectLegacyLoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolChampSelectLegacyLoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolChampSelectLegacyLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolChampSelectLegacyLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolChampSelectLegacyLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
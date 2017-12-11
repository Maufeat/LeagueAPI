#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolPerksLoginSessionState { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolPerksLoginSessionState& v) {
    switch(v) { 
    case LolPerksLoginSessionState::ERROR_e:
      j = "ERROR";
    break;
    case LolPerksLoginSessionState::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolPerksLoginSessionState::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolPerksLoginSessionState::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolPerksLoginSessionState& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolPerksLoginSessionState::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolPerksLoginSessionState::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolPerksLoginSessionState::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolPerksLoginSessionState::SUCCEEDED_e;
      return;
    } 
  }
} 
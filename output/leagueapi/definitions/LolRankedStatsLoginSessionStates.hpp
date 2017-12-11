#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolRankedStatsLoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolRankedStatsLoginSessionStates& v) {
    switch(v) { 
    case LolRankedStatsLoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case LolRankedStatsLoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolRankedStatsLoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolRankedStatsLoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolRankedStatsLoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolRankedStatsLoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolRankedStatsLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolRankedStatsLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolRankedStatsLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
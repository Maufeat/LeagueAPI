#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolSummonerLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolSummonerLoginSessionStates& v) {
    if(v == LolSummonerLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolSummonerLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolSummonerLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolSummonerLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolSummonerLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolSummonerLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolSummonerLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolSummonerLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolSummonerLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
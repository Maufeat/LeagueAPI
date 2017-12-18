#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLeaguesSeverity {  
    ALERT_e = 1,
    WARNING_e = 0,
  };
  inline void to_json(json& j, const LolLeaguesSeverity& v) {
    if(v == LolLeaguesSeverity::ALERT_e) {
      j = "ALERT";
      return;
    }
    if(v == LolLeaguesSeverity::WARNING_e) {
      j = "WARNING";
      return;
    }
  }
  inline void from_json(const json& j, LolLeaguesSeverity& v) {
    if(j.get<std::string>() == "ALERT") {
      v = LolLeaguesSeverity::ALERT_e;
      return;
    } 
    if(j.get<std::string>() == "WARNING") {
      v = LolLeaguesSeverity::WARNING_e;
      return;
    } 
  }
}
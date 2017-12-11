#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLeaguesSeverity { /**/ 
    ALERT_e = 1, /**/ 
    WARNING_e = 0, /**/ 
  };
  static void to_json(json& j, const LolLeaguesSeverity& v) {
    switch(v) { 
    case LolLeaguesSeverity::ALERT_e:
      j = "ALERT";
    break;
    case LolLeaguesSeverity::WARNING_e:
      j = "WARNING";
    break;
    };
  }
  static void from_json(const json& j, LolLeaguesSeverity& v) {
    auto s = j.get<std::string>(); 
    if(s == "ALERT") {
      v = LolLeaguesSeverity::ALERT_e;
      return;
    } 
    if(s == "WARNING") {
      v = LolLeaguesSeverity::WARNING_e;
      return;
    } 
  }
} 
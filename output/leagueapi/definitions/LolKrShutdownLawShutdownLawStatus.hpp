#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolKrShutdownLawShutdownLawStatus { /**/ 
    CUT_OFF_e = 2, /**/ 
    NONE_e = 0, /**/ 
    WARNING_e = 1, /**/ 
  };
  static void to_json(json& j, const LolKrShutdownLawShutdownLawStatus& v) {
    switch(v) { 
    case LolKrShutdownLawShutdownLawStatus::CUT_OFF_e:
      j = "CUT_OFF";
    break;
    case LolKrShutdownLawShutdownLawStatus::NONE_e:
      j = "NONE";
    break;
    case LolKrShutdownLawShutdownLawStatus::WARNING_e:
      j = "WARNING";
    break;
    };
  }
  static void from_json(const json& j, LolKrShutdownLawShutdownLawStatus& v) {
    auto s = j.get<std::string>(); 
    if(s == "CUT_OFF") {
      v = LolKrShutdownLawShutdownLawStatus::CUT_OFF_e;
      return;
    } 
    if(s == "NONE") {
      v = LolKrShutdownLawShutdownLawStatus::NONE_e;
      return;
    } 
    if(s == "WARNING") {
      v = LolKrShutdownLawShutdownLawStatus::WARNING_e;
      return;
    } 
  }
} 
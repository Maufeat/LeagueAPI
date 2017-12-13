#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolKrShutdownLawShutdownLawStatus {  
    CUT_OFF_e = 2,
    NONE_e = 0,
    WARNING_e = 1,
  };
  void to_json(json& j, const LolKrShutdownLawShutdownLawStatus& v) {
  if(v == LolKrShutdownLawShutdownLawStatus::CUT_OFF_e) {
    j = "CUT_OFF";
    return;
  }
  if(v == LolKrShutdownLawShutdownLawStatus::NONE_e) {
    j = "NONE";
    return;
  }
  if(v == LolKrShutdownLawShutdownLawStatus::WARNING_e) {
    j = "WARNING";
    return;
  }
  }
  void from_json(const json& j, LolKrShutdownLawShutdownLawStatus& v) {
  if(j.get<std::string>() == "CUT_OFF") {
    v = LolKrShutdownLawShutdownLawStatus::CUT_OFF_e;
    return;
  } 
  if(j.get<std::string>() == "NONE") {
    v = LolKrShutdownLawShutdownLawStatus::NONE_e;
    return;
  } 
  if(j.get<std::string>() == "WARNING") {
    v = LolKrShutdownLawShutdownLawStatus::WARNING_e;
    return;
  } 
  }
}
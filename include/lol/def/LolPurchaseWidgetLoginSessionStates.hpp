#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolPurchaseWidgetLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolPurchaseWidgetLoginSessionStates& v) {
    if(v == LolPurchaseWidgetLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolPurchaseWidgetLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolPurchaseWidgetLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolPurchaseWidgetLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolPurchaseWidgetLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolPurchaseWidgetLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolPurchaseWidgetLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolPurchaseWidgetLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolPurchaseWidgetLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}
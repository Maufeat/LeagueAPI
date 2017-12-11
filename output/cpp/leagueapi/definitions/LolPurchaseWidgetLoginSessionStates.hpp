#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolPurchaseWidgetLoginSessionStates { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolPurchaseWidgetLoginSessionStates& v) {
    switch(v) { 
    case LolPurchaseWidgetLoginSessionStates::ERROR_e:
      j = "ERROR";
    break;
    case LolPurchaseWidgetLoginSessionStates::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolPurchaseWidgetLoginSessionStates::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolPurchaseWidgetLoginSessionStates::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolPurchaseWidgetLoginSessionStates& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolPurchaseWidgetLoginSessionStates::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolPurchaseWidgetLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolPurchaseWidgetLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolPurchaseWidgetLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
} 
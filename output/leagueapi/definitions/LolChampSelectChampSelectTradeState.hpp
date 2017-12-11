#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolChampSelectChampSelectTradeState { /**/ 
    AVAILABLE_e = 1, /**/ 
    BUSY_e = 2, /**/ 
    INVALID_e = 3, /**/ 
    RECEIVED_e = 4, /**/ 
    SENT_e = 5, /**/ 
  };
  static void to_json(json& j, const LolChampSelectChampSelectTradeState& v) {
    switch(v) { 
    case LolChampSelectChampSelectTradeState::AVAILABLE_e:
      j = "AVAILABLE";
    break;
    case LolChampSelectChampSelectTradeState::BUSY_e:
      j = "BUSY";
    break;
    case LolChampSelectChampSelectTradeState::INVALID_e:
      j = "INVALID";
    break;
    case LolChampSelectChampSelectTradeState::RECEIVED_e:
      j = "RECEIVED";
    break;
    case LolChampSelectChampSelectTradeState::SENT_e:
      j = "SENT";
    break;
    };
  }
  static void from_json(const json& j, LolChampSelectChampSelectTradeState& v) {
    auto s = j.get<std::string>(); 
    if(s == "AVAILABLE") {
      v = LolChampSelectChampSelectTradeState::AVAILABLE_e;
      return;
    } 
    if(s == "BUSY") {
      v = LolChampSelectChampSelectTradeState::BUSY_e;
      return;
    } 
    if(s == "INVALID") {
      v = LolChampSelectChampSelectTradeState::INVALID_e;
      return;
    } 
    if(s == "RECEIVED") {
      v = LolChampSelectChampSelectTradeState::RECEIVED_e;
      return;
    } 
    if(s == "SENT") {
      v = LolChampSelectChampSelectTradeState::SENT_e;
      return;
    } 
  }
} 
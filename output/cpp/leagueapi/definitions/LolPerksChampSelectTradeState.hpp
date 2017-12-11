#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolPerksChampSelectTradeState { /**/ 
    AVAILABLE_e = 1, /**/ 
    BUSY_e = 2, /**/ 
    INVALID_e = 3, /**/ 
    RECEIVED_e = 4, /**/ 
    SENT_e = 5, /**/ 
  };
  static void to_json(json& j, const LolPerksChampSelectTradeState& v) {
    switch(v) { 
    case LolPerksChampSelectTradeState::AVAILABLE_e:
      j = "AVAILABLE";
    break;
    case LolPerksChampSelectTradeState::BUSY_e:
      j = "BUSY";
    break;
    case LolPerksChampSelectTradeState::INVALID_e:
      j = "INVALID";
    break;
    case LolPerksChampSelectTradeState::RECEIVED_e:
      j = "RECEIVED";
    break;
    case LolPerksChampSelectTradeState::SENT_e:
      j = "SENT";
    break;
    };
  }
  static void from_json(const json& j, LolPerksChampSelectTradeState& v) {
    auto s = j.get<std::string>(); 
    if(s == "AVAILABLE") {
      v = LolPerksChampSelectTradeState::AVAILABLE_e;
      return;
    } 
    if(s == "BUSY") {
      v = LolPerksChampSelectTradeState::BUSY_e;
      return;
    } 
    if(s == "INVALID") {
      v = LolPerksChampSelectTradeState::INVALID_e;
      return;
    } 
    if(s == "RECEIVED") {
      v = LolPerksChampSelectTradeState::RECEIVED_e;
      return;
    } 
    if(s == "SENT") {
      v = LolPerksChampSelectTradeState::SENT_e;
      return;
    } 
  }
} 
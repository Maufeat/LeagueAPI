#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolChampSelectLegacyChampSelectTradeState { /**/ 
    AVAILABLE_e = 1, /**/ 
    BUSY_e = 2, /**/ 
    INVALID_e = 3, /**/ 
    RECEIVED_e = 4, /**/ 
    SENT_e = 5, /**/ 
  };
  static void to_json(json& j, const LolChampSelectLegacyChampSelectTradeState& v) {
    switch(v) { 
    case LolChampSelectLegacyChampSelectTradeState::AVAILABLE_e:
      j = "AVAILABLE";
    break;
    case LolChampSelectLegacyChampSelectTradeState::BUSY_e:
      j = "BUSY";
    break;
    case LolChampSelectLegacyChampSelectTradeState::INVALID_e:
      j = "INVALID";
    break;
    case LolChampSelectLegacyChampSelectTradeState::RECEIVED_e:
      j = "RECEIVED";
    break;
    case LolChampSelectLegacyChampSelectTradeState::SENT_e:
      j = "SENT";
    break;
    };
  }
  static void from_json(const json& j, LolChampSelectLegacyChampSelectTradeState& v) {
    auto s = j.get<std::string>(); 
    if(s == "AVAILABLE") {
      v = LolChampSelectLegacyChampSelectTradeState::AVAILABLE_e;
      return;
    } 
    if(s == "BUSY") {
      v = LolChampSelectLegacyChampSelectTradeState::BUSY_e;
      return;
    } 
    if(s == "INVALID") {
      v = LolChampSelectLegacyChampSelectTradeState::INVALID_e;
      return;
    } 
    if(s == "RECEIVED") {
      v = LolChampSelectLegacyChampSelectTradeState::RECEIVED_e;
      return;
    } 
    if(s == "SENT") {
      v = LolChampSelectLegacyChampSelectTradeState::SENT_e;
      return;
    } 
  }
} 
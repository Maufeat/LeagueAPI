#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolChampSelectChampSelectTradeState {  
    AVAILABLE_e = 1,
    BUSY_e = 2,
    INVALID_e = 3,
    RECEIVED_e = 4,
    SENT_e = 5,
  };
  inline void to_json(json& j, const LolChampSelectChampSelectTradeState& v) {
    if(v == LolChampSelectChampSelectTradeState::AVAILABLE_e) {
      j = "AVAILABLE";
      return;
    }
    if(v == LolChampSelectChampSelectTradeState::BUSY_e) {
      j = "BUSY";
      return;
    }
    if(v == LolChampSelectChampSelectTradeState::INVALID_e) {
      j = "INVALID";
      return;
    }
    if(v == LolChampSelectChampSelectTradeState::RECEIVED_e) {
      j = "RECEIVED";
      return;
    }
    if(v == LolChampSelectChampSelectTradeState::SENT_e) {
      j = "SENT";
      return;
    }
  }
  inline void from_json(const json& j, LolChampSelectChampSelectTradeState& v) {
    if(j.get<std::string>() == "AVAILABLE") {
      v = LolChampSelectChampSelectTradeState::AVAILABLE_e;
      return;
    } 
    if(j.get<std::string>() == "BUSY") {
      v = LolChampSelectChampSelectTradeState::BUSY_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID") {
      v = LolChampSelectChampSelectTradeState::INVALID_e;
      return;
    } 
    if(j.get<std::string>() == "RECEIVED") {
      v = LolChampSelectChampSelectTradeState::RECEIVED_e;
      return;
    } 
    if(j.get<std::string>() == "SENT") {
      v = LolChampSelectChampSelectTradeState::SENT_e;
      return;
    } 
  }
}
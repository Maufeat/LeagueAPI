#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolPerksChampSelectTradeState {  
    AVAILABLE_e = 1,
    BUSY_e = 2,
    INVALID_e = 3,
    RECEIVED_e = 4,
    SENT_e = 5,
  };
  void to_json(json& j, const LolPerksChampSelectTradeState& v) {
  if(v == LolPerksChampSelectTradeState::AVAILABLE_e) {
    j = "AVAILABLE";
    return;
  }
  if(v == LolPerksChampSelectTradeState::BUSY_e) {
    j = "BUSY";
    return;
  }
  if(v == LolPerksChampSelectTradeState::INVALID_e) {
    j = "INVALID";
    return;
  }
  if(v == LolPerksChampSelectTradeState::RECEIVED_e) {
    j = "RECEIVED";
    return;
  }
  if(v == LolPerksChampSelectTradeState::SENT_e) {
    j = "SENT";
    return;
  }
  }
  void from_json(const json& j, LolPerksChampSelectTradeState& v) {
  if(j.get<std::string>() == "AVAILABLE") {
    v = LolPerksChampSelectTradeState::AVAILABLE_e;
    return;
  } 
  if(j.get<std::string>() == "BUSY") {
    v = LolPerksChampSelectTradeState::BUSY_e;
    return;
  } 
  if(j.get<std::string>() == "INVALID") {
    v = LolPerksChampSelectTradeState::INVALID_e;
    return;
  } 
  if(j.get<std::string>() == "RECEIVED") {
    v = LolPerksChampSelectTradeState::RECEIVED_e;
    return;
  } 
  if(j.get<std::string>() == "SENT") {
    v = LolPerksChampSelectTradeState::SENT_e;
    return;
  } 
  }
}
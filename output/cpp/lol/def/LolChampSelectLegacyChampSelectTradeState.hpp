#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolChampSelectLegacyChampSelectTradeState {  
    AVAILABLE_e = 1,
    BUSY_e = 2,
    INVALID_e = 3,
    RECEIVED_e = 4,
    SENT_e = 5,
  };
  void to_json(json& j, const LolChampSelectLegacyChampSelectTradeState& v) {
  if(v == LolChampSelectLegacyChampSelectTradeState::AVAILABLE_e) {
    j = "AVAILABLE";
    return;
  }
  if(v == LolChampSelectLegacyChampSelectTradeState::BUSY_e) {
    j = "BUSY";
    return;
  }
  if(v == LolChampSelectLegacyChampSelectTradeState::INVALID_e) {
    j = "INVALID";
    return;
  }
  if(v == LolChampSelectLegacyChampSelectTradeState::RECEIVED_e) {
    j = "RECEIVED";
    return;
  }
  if(v == LolChampSelectLegacyChampSelectTradeState::SENT_e) {
    j = "SENT";
    return;
  }
  }
  void from_json(const json& j, LolChampSelectLegacyChampSelectTradeState& v) {
  if(j.get<std::string>() == "AVAILABLE") {
    v = LolChampSelectLegacyChampSelectTradeState::AVAILABLE_e;
    return;
  } 
  if(j.get<std::string>() == "BUSY") {
    v = LolChampSelectLegacyChampSelectTradeState::BUSY_e;
    return;
  } 
  if(j.get<std::string>() == "INVALID") {
    v = LolChampSelectLegacyChampSelectTradeState::INVALID_e;
    return;
  } 
  if(j.get<std::string>() == "RECEIVED") {
    v = LolChampSelectLegacyChampSelectTradeState::RECEIVED_e;
    return;
  } 
  if(j.get<std::string>() == "SENT") {
    v = LolChampSelectLegacyChampSelectTradeState::SENT_e;
    return;
  } 
  }
}
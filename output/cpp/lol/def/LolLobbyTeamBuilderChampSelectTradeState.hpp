#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyTeamBuilderChampSelectTradeState {  
    AVAILABLE_e = 1,
    BUSY_e = 2,
    INVALID_e = 3,
    RECEIVED_e = 4,
    SENT_e = 5,
  };
  void to_json(json& j, const LolLobbyTeamBuilderChampSelectTradeState& v) {
  if(v == LolLobbyTeamBuilderChampSelectTradeState::AVAILABLE_e) {
    j = "AVAILABLE";
    return;
  }
  if(v == LolLobbyTeamBuilderChampSelectTradeState::BUSY_e) {
    j = "BUSY";
    return;
  }
  if(v == LolLobbyTeamBuilderChampSelectTradeState::INVALID_e) {
    j = "INVALID";
    return;
  }
  if(v == LolLobbyTeamBuilderChampSelectTradeState::RECEIVED_e) {
    j = "RECEIVED";
    return;
  }
  if(v == LolLobbyTeamBuilderChampSelectTradeState::SENT_e) {
    j = "SENT";
    return;
  }
  }
  void from_json(const json& j, LolLobbyTeamBuilderChampSelectTradeState& v) {
  if(j.get<std::string>() == "AVAILABLE") {
    v = LolLobbyTeamBuilderChampSelectTradeState::AVAILABLE_e;
    return;
  } 
  if(j.get<std::string>() == "BUSY") {
    v = LolLobbyTeamBuilderChampSelectTradeState::BUSY_e;
    return;
  } 
  if(j.get<std::string>() == "INVALID") {
    v = LolLobbyTeamBuilderChampSelectTradeState::INVALID_e;
    return;
  } 
  if(j.get<std::string>() == "RECEIVED") {
    v = LolLobbyTeamBuilderChampSelectTradeState::RECEIVED_e;
    return;
  } 
  if(j.get<std::string>() == "SENT") {
    v = LolLobbyTeamBuilderChampSelectTradeState::SENT_e;
    return;
  } 
  }
}
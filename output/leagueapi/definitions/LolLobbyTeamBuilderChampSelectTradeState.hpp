#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderChampSelectTradeState { /**/ 
    AVAILABLE_e = 1, /**/ 
    BUSY_e = 2, /**/ 
    INVALID_e = 3, /**/ 
    RECEIVED_e = 4, /**/ 
    SENT_e = 5, /**/ 
  };
  static void to_json(json& j, const LolLobbyTeamBuilderChampSelectTradeState& v) {
    switch(v) { 
    case LolLobbyTeamBuilderChampSelectTradeState::AVAILABLE_e:
      j = "AVAILABLE";
    break;
    case LolLobbyTeamBuilderChampSelectTradeState::BUSY_e:
      j = "BUSY";
    break;
    case LolLobbyTeamBuilderChampSelectTradeState::INVALID_e:
      j = "INVALID";
    break;
    case LolLobbyTeamBuilderChampSelectTradeState::RECEIVED_e:
      j = "RECEIVED";
    break;
    case LolLobbyTeamBuilderChampSelectTradeState::SENT_e:
      j = "SENT";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyTeamBuilderChampSelectTradeState& v) {
    auto s = j.get<std::string>(); 
    if(s == "AVAILABLE") {
      v = LolLobbyTeamBuilderChampSelectTradeState::AVAILABLE_e;
      return;
    } 
    if(s == "BUSY") {
      v = LolLobbyTeamBuilderChampSelectTradeState::BUSY_e;
      return;
    } 
    if(s == "INVALID") {
      v = LolLobbyTeamBuilderChampSelectTradeState::INVALID_e;
      return;
    } 
    if(s == "RECEIVED") {
      v = LolLobbyTeamBuilderChampSelectTradeState::RECEIVED_e;
      return;
    } 
    if(s == "SENT") {
      v = LolLobbyTeamBuilderChampSelectTradeState::SENT_e;
      return;
    } 
  }
} 
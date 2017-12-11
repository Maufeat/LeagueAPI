#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderLoginSessionState { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolLobbyTeamBuilderLoginSessionState& v) {
    switch(v) { 
    case LolLobbyTeamBuilderLoginSessionState::ERROR_e:
      j = "ERROR";
    break;
    case LolLobbyTeamBuilderLoginSessionState::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolLobbyTeamBuilderLoginSessionState::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolLobbyTeamBuilderLoginSessionState::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyTeamBuilderLoginSessionState& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolLobbyTeamBuilderLoginSessionState::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolLobbyTeamBuilderLoginSessionState::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolLobbyTeamBuilderLoginSessionState::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolLobbyTeamBuilderLoginSessionState::SUCCEEDED_e;
      return;
    } 
  }
} 
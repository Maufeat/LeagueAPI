#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLobbyTeamBuilderLoginSessionState {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLoginSessionState& v) {
    if(v == LolLobbyTeamBuilderLoginSessionState::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolLobbyTeamBuilderLoginSessionState::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolLobbyTeamBuilderLoginSessionState::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolLobbyTeamBuilderLoginSessionState::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLoginSessionState& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolLobbyTeamBuilderLoginSessionState::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolLobbyTeamBuilderLoginSessionState::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolLobbyTeamBuilderLoginSessionState::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolLobbyTeamBuilderLoginSessionState::SUCCEEDED_e;
      return;
    } 
  }
}
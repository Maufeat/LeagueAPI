#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolChatChatPlatformLoginSessionState {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolChatChatPlatformLoginSessionState& v) {
    if(v == LolChatChatPlatformLoginSessionState::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolChatChatPlatformLoginSessionState::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolChatChatPlatformLoginSessionState::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolChatChatPlatformLoginSessionState::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolChatChatPlatformLoginSessionState& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolChatChatPlatformLoginSessionState::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolChatChatPlatformLoginSessionState::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolChatChatPlatformLoginSessionState::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolChatChatPlatformLoginSessionState::SUCCEEDED_e;
      return;
    } 
  }
}
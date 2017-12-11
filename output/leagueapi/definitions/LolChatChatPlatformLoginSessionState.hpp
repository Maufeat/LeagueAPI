#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolChatChatPlatformLoginSessionState { /**/ 
    ERROR_e = 3, /**/ 
    IN_PROGRESS_e = 0, /**/ 
    LOGGING_OUT_e = 2, /**/ 
    SUCCEEDED_e = 1, /**/ 
  };
  static void to_json(json& j, const LolChatChatPlatformLoginSessionState& v) {
    switch(v) { 
    case LolChatChatPlatformLoginSessionState::ERROR_e:
      j = "ERROR";
    break;
    case LolChatChatPlatformLoginSessionState::IN_PROGRESS_e:
      j = "IN_PROGRESS";
    break;
    case LolChatChatPlatformLoginSessionState::LOGGING_OUT_e:
      j = "LOGGING_OUT";
    break;
    case LolChatChatPlatformLoginSessionState::SUCCEEDED_e:
      j = "SUCCEEDED";
    break;
    };
  }
  static void from_json(const json& j, LolChatChatPlatformLoginSessionState& v) {
    auto s = j.get<std::string>(); 
    if(s == "ERROR") {
      v = LolChatChatPlatformLoginSessionState::ERROR_e;
      return;
    } 
    if(s == "IN_PROGRESS") {
      v = LolChatChatPlatformLoginSessionState::IN_PROGRESS_e;
      return;
    } 
    if(s == "LOGGING_OUT") {
      v = LolChatChatPlatformLoginSessionState::LOGGING_OUT_e;
      return;
    } 
    if(s == "SUCCEEDED") {
      v = LolChatChatPlatformLoginSessionState::SUCCEEDED_e;
      return;
    } 
  }
} 
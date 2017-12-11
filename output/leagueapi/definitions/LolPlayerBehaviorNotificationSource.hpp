#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolPlayerBehaviorNotificationSource { /**/ 
    ForcedShutdown_e = 2, /**/ 
    Invalid_e = 0, /**/ 
    Login_e = 1, /**/ 
    Message_e = 3, /**/ 
  };
  static void to_json(json& j, const LolPlayerBehaviorNotificationSource& v) {
    switch(v) { 
    case LolPlayerBehaviorNotificationSource::ForcedShutdown_e:
      j = "ForcedShutdown";
    break;
    case LolPlayerBehaviorNotificationSource::Invalid_e:
      j = "Invalid";
    break;
    case LolPlayerBehaviorNotificationSource::Login_e:
      j = "Login";
    break;
    case LolPlayerBehaviorNotificationSource::Message_e:
      j = "Message";
    break;
    };
  }
  static void from_json(const json& j, LolPlayerBehaviorNotificationSource& v) {
    auto s = j.get<std::string>(); 
    if(s == "ForcedShutdown") {
      v = LolPlayerBehaviorNotificationSource::ForcedShutdown_e;
      return;
    } 
    if(s == "Invalid") {
      v = LolPlayerBehaviorNotificationSource::Invalid_e;
      return;
    } 
    if(s == "Login") {
      v = LolPlayerBehaviorNotificationSource::Login_e;
      return;
    } 
    if(s == "Message") {
      v = LolPlayerBehaviorNotificationSource::Message_e;
      return;
    } 
  }
} 
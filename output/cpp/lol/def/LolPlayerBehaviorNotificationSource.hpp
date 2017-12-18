#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolPlayerBehaviorNotificationSource {  
    ForcedShutdown_e = 2,
    Invalid_e = 0,
    Login_e = 1,
    Message_e = 3,
  };
  inline void to_json(json& j, const LolPlayerBehaviorNotificationSource& v) {
    if(v == LolPlayerBehaviorNotificationSource::ForcedShutdown_e) {
      j = "ForcedShutdown";
      return;
    }
    if(v == LolPlayerBehaviorNotificationSource::Invalid_e) {
      j = "Invalid";
      return;
    }
    if(v == LolPlayerBehaviorNotificationSource::Login_e) {
      j = "Login";
      return;
    }
    if(v == LolPlayerBehaviorNotificationSource::Message_e) {
      j = "Message";
      return;
    }
  }
  inline void from_json(const json& j, LolPlayerBehaviorNotificationSource& v) {
    if(j.get<std::string>() == "ForcedShutdown") {
      v = LolPlayerBehaviorNotificationSource::ForcedShutdown_e;
      return;
    } 
    if(j.get<std::string>() == "Invalid") {
      v = LolPlayerBehaviorNotificationSource::Invalid_e;
      return;
    } 
    if(j.get<std::string>() == "Login") {
      v = LolPlayerBehaviorNotificationSource::Login_e;
      return;
    } 
    if(j.get<std::string>() == "Message") {
      v = LolPlayerBehaviorNotificationSource::Message_e;
      return;
    } 
  }
}
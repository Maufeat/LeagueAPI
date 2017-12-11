#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolClashClashState { /**/ 
    DarkDisabled_e = 0, /**/ 
    DarkEnabled_e = 1, /**/ 
    Disabled_e = 2, /**/ 
    Enabled_e = 3, /**/ 
  };
  static void to_json(json& j, const LolClashClashState& v) {
    switch(v) { 
    case LolClashClashState::DarkDisabled_e:
      j = "DarkDisabled";
    break;
    case LolClashClashState::DarkEnabled_e:
      j = "DarkEnabled";
    break;
    case LolClashClashState::Disabled_e:
      j = "Disabled";
    break;
    case LolClashClashState::Enabled_e:
      j = "Enabled";
    break;
    };
  }
  static void from_json(const json& j, LolClashClashState& v) {
    auto s = j.get<std::string>(); 
    if(s == "DarkDisabled") {
      v = LolClashClashState::DarkDisabled_e;
      return;
    } 
    if(s == "DarkEnabled") {
      v = LolClashClashState::DarkEnabled_e;
      return;
    } 
    if(s == "Disabled") {
      v = LolClashClashState::Disabled_e;
      return;
    } 
    if(s == "Enabled") {
      v = LolClashClashState::Enabled_e;
      return;
    } 
  }
} 
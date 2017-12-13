#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolClashClashState {  
    DarkDisabled_e = 0,
    DarkEnabled_e = 1,
    Disabled_e = 2,
    Enabled_e = 3,
  };
  void to_json(json& j, const LolClashClashState& v) {
    if(v == LolClashClashState::DarkDisabled_e) {
      j = "DarkDisabled";
      return;
    }
    if(v == LolClashClashState::DarkEnabled_e) {
      j = "DarkEnabled";
      return;
    }
    if(v == LolClashClashState::Disabled_e) {
      j = "Disabled";
      return;
    }
    if(v == LolClashClashState::Enabled_e) {
      j = "Enabled";
      return;
    }
  }
  void from_json(const json& j, LolClashClashState& v) {
    if(j.get<std::string>() == "DarkDisabled") {
      v = LolClashClashState::DarkDisabled_e;
      return;
    } 
    if(j.get<std::string>() == "DarkEnabled") {
      v = LolClashClashState::DarkEnabled_e;
      return;
    } 
    if(j.get<std::string>() == "Disabled") {
      v = LolClashClashState::Disabled_e;
      return;
    } 
    if(j.get<std::string>() == "Enabled") {
      v = LolClashClashState::Enabled_e;
      return;
    } 
  }
}
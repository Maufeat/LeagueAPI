#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashClashVisibility.hpp>
#include <lol/def/LolClashClashState.hpp>
namespace lol {
  struct LolClashClashConfig { 
    bool IsPlaymodeRestrictionEnabled;
    bool UseIndividualEntitlement;
    LolClashClashVisibility Visibility;
    std::string IconConfig;
    LolClashClashState EnabledState;
    std::string DarkModeEntitlement; 
  };
  void to_json(json& j, const LolClashClashConfig& v) {
  j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled; 
  j["UseIndividualEntitlement"] = v.UseIndividualEntitlement; 
  j["Visibility"] = v.Visibility; 
  j["IconConfig"] = v.IconConfig; 
  j["EnabledState"] = v.EnabledState; 
  j["DarkModeEntitlement"] = v.DarkModeEntitlement; 
  }
  void from_json(const json& j, LolClashClashConfig& v) {
  v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>(); 
  v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>(); 
  v.Visibility = j.at("Visibility").get<LolClashClashVisibility>(); 
  v.IconConfig = j.at("IconConfig").get<std::string>(); 
  v.EnabledState = j.at("EnabledState").get<LolClashClashState>(); 
  v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>(); 
  }
}
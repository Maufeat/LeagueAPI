#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashClashState.hpp>
#include <lol/def/LolClashClashVisibility.hpp>
namespace lol {
  struct LolClashClashConfig { 
    std::string IconConfig;
    std::string DarkModeEntitlement;
    bool IsPlaymodeRestrictionEnabled;
    LolClashClashVisibility Visibility;
    bool UseIndividualEntitlement;
    LolClashClashState EnabledState; 
  };
  void to_json(json& j, const LolClashClashConfig& v) {
  j["IconConfig"] = v.IconConfig; 
  j["DarkModeEntitlement"] = v.DarkModeEntitlement; 
  j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled; 
  j["Visibility"] = v.Visibility; 
  j["UseIndividualEntitlement"] = v.UseIndividualEntitlement; 
  j["EnabledState"] = v.EnabledState; 
  }
  void from_json(const json& j, LolClashClashConfig& v) {
  v.IconConfig = j.at("IconConfig").get<std::string>(); 
  v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>(); 
  v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>(); 
  v.Visibility = j.at("Visibility").get<LolClashClashVisibility>(); 
  v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>(); 
  v.EnabledState = j.at("EnabledState").get<LolClashClashState>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "LolClashClashVisibility.hpp"
#include "LolClashClashState.hpp"
namespace lol {
  struct LolClashClashConfig { 
    LolClashClashVisibility Visibility;
    LolClashClashState EnabledState;
    std::string DarkModeEntitlement;
    std::string IconConfig;
    bool IsPlaymodeRestrictionEnabled;
    bool UseIndividualEntitlement; 
  };
  inline void to_json(json& j, const LolClashClashConfig& v) {
    j["Visibility"] = v.Visibility; 
    j["EnabledState"] = v.EnabledState; 
    j["DarkModeEntitlement"] = v.DarkModeEntitlement; 
    j["IconConfig"] = v.IconConfig; 
    j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled; 
    j["UseIndividualEntitlement"] = v.UseIndividualEntitlement; 
  }
  inline void from_json(const json& j, LolClashClashConfig& v) {
    v.Visibility = j.at("Visibility").get<LolClashClashVisibility>(); 
    v.EnabledState = j.at("EnabledState").get<LolClashClashState>(); 
    v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>(); 
    v.IconConfig = j.at("IconConfig").get<std::string>(); 
    v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>(); 
    v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>(); 
  }
}
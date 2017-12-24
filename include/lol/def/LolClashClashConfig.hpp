#pragma once
#include "../base_def.hpp" 
#include "LolClashClashVisibility.hpp"
#include "LolClashClashState.hpp"
namespace lol {
  struct LolClashClashConfig { 
    bool UseIndividualEntitlement;
    std::string DarkModeEntitlement;
    bool IsPlaymodeRestrictionEnabled;
    LolClashClashState EnabledState;
    LolClashClashVisibility Visibility;
    std::string IconConfig; 
  };
  inline void to_json(json& j, const LolClashClashConfig& v) {
    j["UseIndividualEntitlement"] = v.UseIndividualEntitlement; 
    j["DarkModeEntitlement"] = v.DarkModeEntitlement; 
    j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled; 
    j["EnabledState"] = v.EnabledState; 
    j["Visibility"] = v.Visibility; 
    j["IconConfig"] = v.IconConfig; 
  }
  inline void from_json(const json& j, LolClashClashConfig& v) {
    v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>(); 
    v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>(); 
    v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>(); 
    v.EnabledState = j.at("EnabledState").get<LolClashClashState>(); 
    v.Visibility = j.at("Visibility").get<LolClashClashVisibility>(); 
    v.IconConfig = j.at("IconConfig").get<std::string>(); 
  }
}
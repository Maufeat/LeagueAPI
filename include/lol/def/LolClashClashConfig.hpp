#pragma once
#include "../base_def.hpp" 
#include "LolClashClashState.hpp"
#include "LolClashClashVisibility.hpp"
namespace lol {
  struct LolClashClashConfig { 
    LolClashClashVisibility Visibility;
    bool UseIndividualEntitlement;
    LolClashClashState EnabledState;
    std::string DarkModeEntitlement;
    bool IsPlaymodeRestrictionEnabled;
    std::string IconConfig; 
  };
  inline void to_json(json& j, const LolClashClashConfig& v) {
    j["Visibility"] = v.Visibility; 
    j["UseIndividualEntitlement"] = v.UseIndividualEntitlement; 
    j["EnabledState"] = v.EnabledState; 
    j["DarkModeEntitlement"] = v.DarkModeEntitlement; 
    j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled; 
    j["IconConfig"] = v.IconConfig; 
  }
  inline void from_json(const json& j, LolClashClashConfig& v) {
    v.Visibility = j.at("Visibility").get<LolClashClashVisibility>(); 
    v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>(); 
    v.EnabledState = j.at("EnabledState").get<LolClashClashState>(); 
    v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>(); 
    v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>(); 
    v.IconConfig = j.at("IconConfig").get<std::string>(); 
  }
}
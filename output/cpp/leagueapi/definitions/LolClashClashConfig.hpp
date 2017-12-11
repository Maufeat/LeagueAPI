#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClashClashState.hpp>
#include <leagueapi/definitions/LolClashClashVisibility.hpp>

namespace leagueapi {
  struct LolClashClashConfig { /**/ 
    bool IsPlaymodeRestrictionEnabled;/**/
    bool UseIndividualEntitlement;/**/
    LolClashClashVisibility Visibility;/**/
    std::string IconConfig;/**/
    LolClashClashState EnabledState;/**/
    std::string DarkModeEntitlement;/**/
  };
  static void to_json(json& j, const LolClashClashConfig& v) { 
    j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled;
    j["UseIndividualEntitlement"] = v.UseIndividualEntitlement;
    j["Visibility"] = v.Visibility;
    j["IconConfig"] = v.IconConfig;
    j["EnabledState"] = v.EnabledState;
    j["DarkModeEntitlement"] = v.DarkModeEntitlement;
  }
  static void from_json(const json& j, LolClashClashConfig& v) { 
    v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>(); 
    v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>(); 
    v.Visibility = j.at("Visibility").get<LolClashClashVisibility>(); 
    v.IconConfig = j.at("IconConfig").get<std::string>(); 
    v.EnabledState = j.at("EnabledState").get<LolClashClashState>(); 
    v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>(); 
  }
} 
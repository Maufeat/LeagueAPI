#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolPerksCustomizationLimits { /**/ 
    CanSelectKeystones_e = 2, /**/ 
    CanSelectPages_e = 1, /**/ 
    CanSelectPrimaries_e = 4, /**/ 
    CanSelectSplash_e = 8, /**/ 
    CanUseAdvancedStyles_e = 16, /**/ 
    Locked_e = 0, /**/ 
  };
  static void to_json(json& j, const LolPerksCustomizationLimits& v) {
    switch(v) { 
    case LolPerksCustomizationLimits::CanSelectKeystones_e:
      j = "CanSelectKeystones";
    break;
    case LolPerksCustomizationLimits::CanSelectPages_e:
      j = "CanSelectPages";
    break;
    case LolPerksCustomizationLimits::CanSelectPrimaries_e:
      j = "CanSelectPrimaries";
    break;
    case LolPerksCustomizationLimits::CanSelectSplash_e:
      j = "CanSelectSplash";
    break;
    case LolPerksCustomizationLimits::CanUseAdvancedStyles_e:
      j = "CanUseAdvancedStyles";
    break;
    case LolPerksCustomizationLimits::Locked_e:
      j = "Locked";
    break;
    };
  }
  static void from_json(const json& j, LolPerksCustomizationLimits& v) {
    auto s = j.get<std::string>(); 
    if(s == "CanSelectKeystones") {
      v = LolPerksCustomizationLimits::CanSelectKeystones_e;
      return;
    } 
    if(s == "CanSelectPages") {
      v = LolPerksCustomizationLimits::CanSelectPages_e;
      return;
    } 
    if(s == "CanSelectPrimaries") {
      v = LolPerksCustomizationLimits::CanSelectPrimaries_e;
      return;
    } 
    if(s == "CanSelectSplash") {
      v = LolPerksCustomizationLimits::CanSelectSplash_e;
      return;
    } 
    if(s == "CanUseAdvancedStyles") {
      v = LolPerksCustomizationLimits::CanUseAdvancedStyles_e;
      return;
    } 
    if(s == "Locked") {
      v = LolPerksCustomizationLimits::Locked_e;
      return;
    } 
  }
} 
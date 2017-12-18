#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolPerksCustomizationLimits {  
    CanSelectKeystones_e = 2,
    CanSelectPages_e = 1,
    CanSelectPrimaries_e = 4,
    CanSelectSplash_e = 8,
    CanUseAdvancedStyles_e = 16,
    Locked_e = 0,
  };
  inline void to_json(json& j, const LolPerksCustomizationLimits& v) {
    if(v == LolPerksCustomizationLimits::CanSelectKeystones_e) {
      j = "CanSelectKeystones";
      return;
    }
    if(v == LolPerksCustomizationLimits::CanSelectPages_e) {
      j = "CanSelectPages";
      return;
    }
    if(v == LolPerksCustomizationLimits::CanSelectPrimaries_e) {
      j = "CanSelectPrimaries";
      return;
    }
    if(v == LolPerksCustomizationLimits::CanSelectSplash_e) {
      j = "CanSelectSplash";
      return;
    }
    if(v == LolPerksCustomizationLimits::CanUseAdvancedStyles_e) {
      j = "CanUseAdvancedStyles";
      return;
    }
    if(v == LolPerksCustomizationLimits::Locked_e) {
      j = "Locked";
      return;
    }
  }
  inline void from_json(const json& j, LolPerksCustomizationLimits& v) {
    if(j.get<std::string>() == "CanSelectKeystones") {
      v = LolPerksCustomizationLimits::CanSelectKeystones_e;
      return;
    } 
    if(j.get<std::string>() == "CanSelectPages") {
      v = LolPerksCustomizationLimits::CanSelectPages_e;
      return;
    } 
    if(j.get<std::string>() == "CanSelectPrimaries") {
      v = LolPerksCustomizationLimits::CanSelectPrimaries_e;
      return;
    } 
    if(j.get<std::string>() == "CanSelectSplash") {
      v = LolPerksCustomizationLimits::CanSelectSplash_e;
      return;
    } 
    if(j.get<std::string>() == "CanUseAdvancedStyles") {
      v = LolPerksCustomizationLimits::CanUseAdvancedStyles_e;
      return;
    } 
    if(j.get<std::string>() == "Locked") {
      v = LolPerksCustomizationLimits::Locked_e;
      return;
    } 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPurchaseWidgetPurchaseWidgetConfig { 
    bool purchaseDisclaimerEnabled;
    bool enabled; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetPurchaseWidgetConfig& v) {
    j["purchaseDisclaimerEnabled"] = v.purchaseDisclaimerEnabled; 
    j["enabled"] = v.enabled; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetPurchaseWidgetConfig& v) {
    v.purchaseDisclaimerEnabled = j.at("purchaseDisclaimerEnabled").get<bool>(); 
    v.enabled = j.at("enabled").get<bool>(); 
  }
}
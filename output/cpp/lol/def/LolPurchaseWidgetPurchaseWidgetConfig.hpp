#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPurchaseWidgetPurchaseWidgetConfig { 
    bool enabled;
    bool purchaseDisclaimerEnabled; 
  };
  void to_json(json& j, const LolPurchaseWidgetPurchaseWidgetConfig& v) {
  j["enabled"] = v.enabled; 
  j["purchaseDisclaimerEnabled"] = v.purchaseDisclaimerEnabled; 
  }
  void from_json(const json& j, LolPurchaseWidgetPurchaseWidgetConfig& v) {
  v.enabled = j.at("enabled").get<bool>(); 
  v.purchaseDisclaimerEnabled = j.at("purchaseDisclaimerEnabled").get<bool>(); 
  }
}
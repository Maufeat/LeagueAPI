#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPurchaseWidgetPurchaseWidgetConfig { /**/ 
    bool enabled;/**/
    bool purchaseDisclaimerEnabled;/**/
  };
  static void to_json(json& j, const LolPurchaseWidgetPurchaseWidgetConfig& v) { 
    j["enabled"] = v.enabled;
    j["purchaseDisclaimerEnabled"] = v.purchaseDisclaimerEnabled;
  }
  static void from_json(const json& j, LolPurchaseWidgetPurchaseWidgetConfig& v) { 
    v.enabled = j.at("enabled").get<bool>(); 
    v.purchaseDisclaimerEnabled = j.at("purchaseDisclaimerEnabled").get<bool>(); 
  }
} 
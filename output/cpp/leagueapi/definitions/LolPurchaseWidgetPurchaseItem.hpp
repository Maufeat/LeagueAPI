#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPurchaseWidgetItemKey.hpp>
#include <leagueapi/definitions/LolPurchaseWidgetItemPrice.hpp>

namespace leagueapi {
  struct LolPurchaseWidgetPurchaseItem { /**/ 
    int32_t quantity;/**/
    LolPurchaseWidgetItemKey itemKey;/**/
    LolPurchaseWidgetItemPrice purchaseCurrencyInfo;/**/
  };
  static void to_json(json& j, const LolPurchaseWidgetPurchaseItem& v) { 
    j["quantity"] = v.quantity;
    j["itemKey"] = v.itemKey;
    j["purchaseCurrencyInfo"] = v.purchaseCurrencyInfo;
  }
  static void from_json(const json& j, LolPurchaseWidgetPurchaseItem& v) { 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
    v.purchaseCurrencyInfo = j.at("purchaseCurrencyInfo").get<LolPurchaseWidgetItemPrice>(); 
  }
} 
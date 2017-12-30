#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetItemKey.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
namespace lol {
  struct LolPurchaseWidgetPurchaseItem { 
    LolPurchaseWidgetItemKey itemKey;
    LolPurchaseWidgetItemPrice purchaseCurrencyInfo;
    int32_t quantity; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetPurchaseItem& v) {
    j["itemKey"] = v.itemKey; 
    j["purchaseCurrencyInfo"] = v.purchaseCurrencyInfo; 
    j["quantity"] = v.quantity; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetPurchaseItem& v) {
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
    v.purchaseCurrencyInfo = j.at("purchaseCurrencyInfo").get<LolPurchaseWidgetItemPrice>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
  }
}
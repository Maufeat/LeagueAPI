#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetItemKey.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
namespace lol {
  struct LolPurchaseWidgetPurchaseItem { 
    LolPurchaseWidgetItemPrice purchaseCurrencyInfo;
    int32_t quantity;
    LolPurchaseWidgetItemKey itemKey; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetPurchaseItem& v) {
    j["purchaseCurrencyInfo"] = v.purchaseCurrencyInfo; 
    j["quantity"] = v.quantity; 
    j["itemKey"] = v.itemKey; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetPurchaseItem& v) {
    v.purchaseCurrencyInfo = j.at("purchaseCurrencyInfo").get<LolPurchaseWidgetItemPrice>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
  }
}
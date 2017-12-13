#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetItemPrice.hpp>
#include <lol/def/LolPurchaseWidgetItemKey.hpp>
namespace lol {
  struct LolPurchaseWidgetPurchaseItem { 
    LolPurchaseWidgetItemKey itemKey;
    int32_t quantity;
    LolPurchaseWidgetItemPrice purchaseCurrencyInfo; 
  };
  void to_json(json& j, const LolPurchaseWidgetPurchaseItem& v) {
    j["itemKey"] = v.itemKey; 
    j["quantity"] = v.quantity; 
    j["purchaseCurrencyInfo"] = v.purchaseCurrencyInfo; 
  }
  void from_json(const json& j, LolPurchaseWidgetPurchaseItem& v) {
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.purchaseCurrencyInfo = j.at("purchaseCurrencyInfo").get<LolPurchaseWidgetItemPrice>(); 
  }
}
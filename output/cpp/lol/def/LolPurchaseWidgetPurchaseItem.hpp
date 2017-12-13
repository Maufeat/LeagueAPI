#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetItemKey.hpp>
#include <lol/def/LolPurchaseWidgetItemPrice.hpp>
namespace lol {
  struct LolPurchaseWidgetPurchaseItem { 
    int32_t quantity;
    LolPurchaseWidgetItemKey itemKey;
    LolPurchaseWidgetItemPrice purchaseCurrencyInfo; 
  };
  void to_json(json& j, const LolPurchaseWidgetPurchaseItem& v) {
  j["quantity"] = v.quantity; 
  j["itemKey"] = v.itemKey; 
  j["purchaseCurrencyInfo"] = v.purchaseCurrencyInfo; 
  }
  void from_json(const json& j, LolPurchaseWidgetPurchaseItem& v) {
  v.quantity = j.at("quantity").get<int32_t>(); 
  v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
  v.purchaseCurrencyInfo = j.at("purchaseCurrencyInfo").get<LolPurchaseWidgetItemPrice>(); 
  }
}
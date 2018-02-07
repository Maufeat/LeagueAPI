#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetItemKey.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
namespace lol {
  struct LolPurchaseWidgetPurchaseItem { 
    LolPurchaseWidgetItemKey itemKey;
    int32_t quantity;
    std::string source;
    LolPurchaseWidgetItemPrice purchaseCurrencyInfo; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetPurchaseItem& v) {
    j["itemKey"] = v.itemKey; 
    j["quantity"] = v.quantity; 
    j["source"] = v.source; 
    j["purchaseCurrencyInfo"] = v.purchaseCurrencyInfo; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetPurchaseItem& v) {
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.source = j.at("source").get<std::string>(); 
    v.purchaseCurrencyInfo = j.at("purchaseCurrencyInfo").get<LolPurchaseWidgetItemPrice>(); 
  }
}
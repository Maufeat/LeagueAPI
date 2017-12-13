#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetItemKey.hpp>
namespace lol {
  struct LolPurchaseWidgetValidationRequestItem { 
    int32_t quantity;
    LolPurchaseWidgetItemKey itemKey; 
  };
  void to_json(json& j, const LolPurchaseWidgetValidationRequestItem& v) {
  j["quantity"] = v.quantity; 
  j["itemKey"] = v.itemKey; 
  }
  void from_json(const json& j, LolPurchaseWidgetValidationRequestItem& v) {
  v.quantity = j.at("quantity").get<int32_t>(); 
  v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
  }
}
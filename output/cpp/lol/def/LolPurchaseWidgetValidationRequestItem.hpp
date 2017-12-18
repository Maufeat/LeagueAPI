#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetItemKey.hpp>
namespace lol {
  struct LolPurchaseWidgetValidationRequestItem { 
    LolPurchaseWidgetItemKey itemKey;
    int32_t quantity; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetValidationRequestItem& v) {
    j["itemKey"] = v.itemKey; 
    j["quantity"] = v.quantity; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetValidationRequestItem& v) {
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
  }
}
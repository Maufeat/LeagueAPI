#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetItemKey.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
#include "LolPurchaseWidgetSale.hpp"
namespace lol {
  struct LolPurchaseWidgetValidationResponseItem { 
    int32_t quantity;
    std::optional<LolPurchaseWidgetSale> sale;
    std::optional<std::string> name;
    std::optional<std::string> description;
    LolPurchaseWidgetItemKey itemKey;
    std::vector<LolPurchaseWidgetItemPrice> prices; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetValidationResponseItem& v) {
    j["quantity"] = v.quantity; 
    if(v.sale)
      j["sale"] = *v.sale;
    if(v.name)
      j["name"] = *v.name;
    if(v.description)
      j["description"] = *v.description;
    j["itemKey"] = v.itemKey; 
    j["prices"] = v.prices; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetValidationResponseItem& v) {
    v.quantity = j.at("quantity").get<int32_t>(); 
    if(auto it = j.find("sale"); it != j.end() && !it->is_null())
      v.sale = it->get<std::optional<LolPurchaseWidgetSale>>(); 
    if(auto it = j.find("name"); it != j.end() && !it->is_null())
      v.name = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("description"); it != j.end() && !it->is_null())
      v.description = it->get<std::optional<std::string>>(); 
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice>>(); 
  }
}
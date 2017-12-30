#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetSale.hpp"
#include "LolPurchaseWidgetItemKey.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
namespace lol {
  struct LolPurchaseWidgetValidationResponseItem { 
    std::optional<std::string> name;
    std::optional<LolPurchaseWidgetSale> sale;
    LolPurchaseWidgetItemKey itemKey;
    int32_t quantity;
    std::vector<LolPurchaseWidgetItemPrice> prices;
    std::optional<std::string> description; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetValidationResponseItem& v) {
    if(v.name)
      j["name"] = *v.name;
    if(v.sale)
      j["sale"] = *v.sale;
    j["itemKey"] = v.itemKey; 
    j["quantity"] = v.quantity; 
    j["prices"] = v.prices; 
    if(v.description)
      j["description"] = *v.description;
  }
  inline void from_json(const json& j, LolPurchaseWidgetValidationResponseItem& v) {
    if(auto it = j.find("name"); it != j.end() && !it->is_null())
      v.name = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("sale"); it != j.end() && !it->is_null())
      v.sale = it->get<std::optional<LolPurchaseWidgetSale>>(); 
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice>>(); 
    if(auto it = j.find("description"); it != j.end() && !it->is_null())
      v.description = it->get<std::optional<std::string>>(); 
  }
}
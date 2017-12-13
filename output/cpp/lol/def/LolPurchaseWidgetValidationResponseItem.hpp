#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetItemPrice.hpp>
#include <lol/def/LolPurchaseWidgetSale.hpp>
#include <lol/def/LolPurchaseWidgetItemKey.hpp>
namespace lol {
  struct LolPurchaseWidgetValidationResponseItem { 
    std::vector<LolPurchaseWidgetItemPrice> prices;
    std::optional<std::string> name;
    int32_t quantity;
    LolPurchaseWidgetItemKey itemKey;
    std::optional<std::string> description;
    std::optional<LolPurchaseWidgetSale> sale; 
  };
  void to_json(json& j, const LolPurchaseWidgetValidationResponseItem& v) {
    j["prices"] = v.prices; 
    if(v.name)
      j["name"] = *v.name;
    j["quantity"] = v.quantity; 
    j["itemKey"] = v.itemKey; 
    if(v.description)
      j["description"] = *v.description;
    if(v.sale)
      j["sale"] = *v.sale;
  }
  void from_json(const json& j, LolPurchaseWidgetValidationResponseItem& v) {
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice>>(); 
    if(auto it = j.find("name"); it != j.end() && !it->is_null())
      v.name = it->get<std::optional<std::string>>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
    if(auto it = j.find("description"); it != j.end() && !it->is_null())
      v.description = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("sale"); it != j.end() && !it->is_null())
      v.sale = it->get<std::optional<LolPurchaseWidgetSale>>(); 
  }
}
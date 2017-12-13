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
  j["name"] = v.name; 
  j["quantity"] = v.quantity; 
  j["itemKey"] = v.itemKey; 
  j["description"] = v.description; 
  j["sale"] = v.sale; 
  }
  void from_json(const json& j, LolPurchaseWidgetValidationResponseItem& v) {
  v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice>>(); 
  v.name = j.at("name").get<std::optional<std::string>>(); 
  v.quantity = j.at("quantity").get<int32_t>(); 
  v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
  v.description = j.at("description").get<std::optional<std::string>>(); 
  v.sale = j.at("sale").get<std::optional<LolPurchaseWidgetSale>>(); 
  }
}
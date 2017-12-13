#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetItemKey.hpp>
#include <lol/def/LolPurchaseWidgetItemPrice.hpp>
#include <lol/def/LolPurchaseWidgetSale.hpp>
namespace lol {
  struct LolPurchaseWidgetValidationResponseItem { 
    int32_t quantity;
    LolPurchaseWidgetItemKey itemKey;
    std::optional<std::string> name;
    std::optional<LolPurchaseWidgetSale> sale;
    std::optional<std::string> description;
    std::vector<LolPurchaseWidgetItemPrice> prices; 
  };
  void to_json(json& j, const LolPurchaseWidgetValidationResponseItem& v) {
  j["quantity"] = v.quantity; 
  j["itemKey"] = v.itemKey; 
  j["name"] = v.name; 
  j["sale"] = v.sale; 
  j["description"] = v.description; 
  j["prices"] = v.prices; 
  }
  void from_json(const json& j, LolPurchaseWidgetValidationResponseItem& v) {
  v.quantity = j.at("quantity").get<int32_t>(); 
  v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
  v.name = j.at("name").get<std::optional<std::string>>(); 
  v.sale = j.at("sale").get<std::optional<LolPurchaseWidgetSale>>(); 
  v.description = j.at("description").get<std::optional<std::string>>(); 
  v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice>>(); 
  }
}
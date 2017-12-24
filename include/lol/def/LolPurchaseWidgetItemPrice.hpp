#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPurchaseWidgetItemPrice { 
    bool purchasable;
    int32_t price;
    std::string currencyType; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetItemPrice& v) {
    j["purchasable"] = v.purchasable; 
    j["price"] = v.price; 
    j["currencyType"] = v.currencyType; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetItemPrice& v) {
    v.purchasable = j.at("purchasable").get<bool>(); 
    v.price = j.at("price").get<int32_t>(); 
    v.currencyType = j.at("currencyType").get<std::string>(); 
  }
}
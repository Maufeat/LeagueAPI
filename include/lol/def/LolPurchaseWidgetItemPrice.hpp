#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPurchaseWidgetItemPrice { 
    std::string currencyType;
    int32_t price;
    bool purchasable; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetItemPrice& v) {
    j["currencyType"] = v.currencyType; 
    j["price"] = v.price; 
    j["purchasable"] = v.purchasable; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetItemPrice& v) {
    v.currencyType = j.at("currencyType").get<std::string>(); 
    v.price = j.at("price").get<int32_t>(); 
    v.purchasable = j.at("purchasable").get<bool>(); 
  }
}
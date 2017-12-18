#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPurchaseWidgetItemPrice { 
    int32_t price;
    bool purchasable;
    std::string currencyType; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetItemPrice& v) {
    j["price"] = v.price; 
    j["purchasable"] = v.purchasable; 
    j["currencyType"] = v.currencyType; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetItemPrice& v) {
    v.price = j.at("price").get<int32_t>(); 
    v.purchasable = j.at("purchasable").get<bool>(); 
    v.currencyType = j.at("currencyType").get<std::string>(); 
  }
}
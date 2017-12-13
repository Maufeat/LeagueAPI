#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPurchaseWidgetItemPrice { 
    int32_t price;
    std::string currencyType;
    bool purchasable; 
  };
  void to_json(json& j, const LolPurchaseWidgetItemPrice& v) {
  j["price"] = v.price; 
  j["currencyType"] = v.currencyType; 
  j["purchasable"] = v.purchasable; 
  }
  void from_json(const json& j, LolPurchaseWidgetItemPrice& v) {
  v.price = j.at("price").get<int32_t>(); 
  v.currencyType = j.at("currencyType").get<std::string>(); 
  v.purchasable = j.at("purchasable").get<bool>(); 
  }
}
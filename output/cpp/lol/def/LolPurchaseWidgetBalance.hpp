#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPurchaseWidgetBalance { 
    int32_t amount;
    std::string currencyType; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetBalance& v) {
    j["amount"] = v.amount; 
    j["currencyType"] = v.currencyType; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetBalance& v) {
    v.amount = j.at("amount").get<int32_t>(); 
    v.currencyType = j.at("currencyType").get<std::string>(); 
  }
}
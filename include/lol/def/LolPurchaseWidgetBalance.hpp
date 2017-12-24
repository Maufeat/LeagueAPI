#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPurchaseWidgetBalance { 
    std::string currencyType;
    int32_t amount; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetBalance& v) {
    j["currencyType"] = v.currencyType; 
    j["amount"] = v.amount; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetBalance& v) {
    v.currencyType = j.at("currencyType").get<std::string>(); 
    v.amount = j.at("amount").get<int32_t>(); 
  }
}
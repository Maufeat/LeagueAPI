#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetItemPrice.hpp"
namespace lol {
  struct LolPurchaseWidgetSale { 
    std::string endDate;
    std::vector<LolPurchaseWidgetItemPrice> prices;
    std::string startDate; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetSale& v) {
    j["endDate"] = v.endDate; 
    j["prices"] = v.prices; 
    j["startDate"] = v.startDate; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetSale& v) {
    v.endDate = j.at("endDate").get<std::string>(); 
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice>>(); 
    v.startDate = j.at("startDate").get<std::string>(); 
  }
}
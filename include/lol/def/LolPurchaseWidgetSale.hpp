#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetItemPrice.hpp"
namespace lol {
  struct LolPurchaseWidgetSale { 
    std::string startDate;
    std::string endDate;
    std::vector<LolPurchaseWidgetItemPrice> prices; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetSale& v) {
    j["startDate"] = v.startDate; 
    j["endDate"] = v.endDate; 
    j["prices"] = v.prices; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetSale& v) {
    v.startDate = j.at("startDate").get<std::string>(); 
    v.endDate = j.at("endDate").get<std::string>(); 
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice>>(); 
  }
}
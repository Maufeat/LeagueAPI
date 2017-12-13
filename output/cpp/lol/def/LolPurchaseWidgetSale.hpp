#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetItemPrice.hpp>
namespace lol {
  struct LolPurchaseWidgetSale { 
    std::string startDate;
    std::vector<LolPurchaseWidgetItemPrice> prices;
    std::string endDate; 
  };
  void to_json(json& j, const LolPurchaseWidgetSale& v) {
    j["startDate"] = v.startDate; 
    j["prices"] = v.prices; 
    j["endDate"] = v.endDate; 
  }
  void from_json(const json& j, LolPurchaseWidgetSale& v) {
    v.startDate = j.at("startDate").get<std::string>(); 
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice>>(); 
    v.endDate = j.at("endDate").get<std::string>(); 
  }
}
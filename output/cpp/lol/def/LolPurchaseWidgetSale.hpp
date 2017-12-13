#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetItemPrice.hpp>
namespace lol {
  struct LolPurchaseWidgetSale { 
    std::string startDate;
    std::string endDate;
    std::vector<LolPurchaseWidgetItemPrice> prices; 
  };
  void to_json(json& j, const LolPurchaseWidgetSale& v) {
  j["startDate"] = v.startDate; 
  j["endDate"] = v.endDate; 
  j["prices"] = v.prices; 
  }
  void from_json(const json& j, LolPurchaseWidgetSale& v) {
  v.startDate = j.at("startDate").get<std::string>(); 
  v.endDate = j.at("endDate").get<std::string>(); 
  v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice>>(); 
  }
}
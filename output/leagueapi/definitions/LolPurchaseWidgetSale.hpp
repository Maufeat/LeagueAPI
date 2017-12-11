#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPurchaseWidgetItemPrice.hpp>"

namespace leagueapi {
  struct LolPurchaseWidgetSale { /**/ 
    std::string startDate;/**/
    std::string endDate;/**/
    std::vector<LolPurchaseWidgetItemPrice> prices;/**/
  };
  static void to_json(json& j, const LolPurchaseWidgetSale& v) { 
    j["startDate"] = v.startDate;
    j["endDate"] = v.endDate;
    j["prices"] = v.prices;
  }
  static void from_json(const json& j, LolPurchaseWidgetSale& v) { 
    v.startDate = j.at("startDate").get<std::string>(); 
    v.endDate = j.at("endDate").get<std::string>(); 
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice>>(); 
  }
} 
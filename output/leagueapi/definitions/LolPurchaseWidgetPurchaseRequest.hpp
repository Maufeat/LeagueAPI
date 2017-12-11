#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPurchaseWidgetPurchaseItem.hpp>"

namespace leagueapi {
  struct LolPurchaseWidgetPurchaseRequest { /**/ 
    std::vector<LolPurchaseWidgetPurchaseItem> items;/**/
  };
  static void to_json(json& j, const LolPurchaseWidgetPurchaseRequest& v) { 
    j["items"] = v.items;
  }
  static void from_json(const json& j, LolPurchaseWidgetPurchaseRequest& v) { 
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem>>(); 
  }
} 
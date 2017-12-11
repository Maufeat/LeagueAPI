#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPurchaseWidgetValidationRequestItem.hpp>"

namespace leagueapi {
  struct LolPurchaseWidgetValidationRequest { /**/ 
    std::vector<LolPurchaseWidgetValidationRequestItem> items;/**/
  };
  static void to_json(json& j, const LolPurchaseWidgetValidationRequest& v) { 
    j["items"] = v.items;
  }
  static void from_json(const json& j, LolPurchaseWidgetValidationRequest& v) { 
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetValidationRequestItem>>(); 
  }
} 
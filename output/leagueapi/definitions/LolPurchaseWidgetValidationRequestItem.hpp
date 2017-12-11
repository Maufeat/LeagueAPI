#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPurchaseWidgetItemKey.hpp>"

namespace leagueapi {
  struct LolPurchaseWidgetValidationRequestItem { /**/ 
    int32_t quantity;/**/
    LolPurchaseWidgetItemKey itemKey;/**/
  };
  static void to_json(json& j, const LolPurchaseWidgetValidationRequestItem& v) { 
    j["quantity"] = v.quantity;
    j["itemKey"] = v.itemKey;
  }
  static void from_json(const json& j, LolPurchaseWidgetValidationRequestItem& v) { 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
  }
} 
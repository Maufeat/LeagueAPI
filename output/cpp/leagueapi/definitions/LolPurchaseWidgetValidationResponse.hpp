#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPurchaseWidgetValidationResponseItem.hpp>

namespace leagueapi {
  struct LolPurchaseWidgetValidationResponse { /**/ 
    std::vector<LolPurchaseWidgetValidationResponseItem> items;/**/
    bool valid;/**/
  };
  static void to_json(json& j, const LolPurchaseWidgetValidationResponse& v) { 
    j["items"] = v.items;
    j["valid"] = v.valid;
  }
  static void from_json(const json& j, LolPurchaseWidgetValidationResponse& v) { 
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetValidationResponseItem>>(); 
    v.valid = j.at("valid").get<bool>(); 
  }
} 
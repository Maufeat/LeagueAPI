#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPurchaseWidgetItemKey.hpp>"

namespace leagueapi {
  struct LolPurchaseWidgetTransaction { /**/ 
    std::string itemName;/**/
    LolPurchaseWidgetItemKey itemKey;/**/
    std::string transactionId;/**/
    std::string iconUrl;/**/
  };
  static void to_json(json& j, const LolPurchaseWidgetTransaction& v) { 
    j["itemName"] = v.itemName;
    j["itemKey"] = v.itemKey;
    j["transactionId"] = v.transactionId;
    j["iconUrl"] = v.iconUrl;
  }
  static void from_json(const json& j, LolPurchaseWidgetTransaction& v) { 
    v.itemName = j.at("itemName").get<std::string>(); 
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
    v.transactionId = j.at("transactionId").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
  }
} 
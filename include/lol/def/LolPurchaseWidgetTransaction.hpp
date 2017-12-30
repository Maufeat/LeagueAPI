#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetItemKey.hpp"
namespace lol {
  struct LolPurchaseWidgetTransaction { 
    std::string transactionId;
    std::string iconUrl;
    LolPurchaseWidgetItemKey itemKey;
    std::string itemName; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetTransaction& v) {
    j["transactionId"] = v.transactionId; 
    j["iconUrl"] = v.iconUrl; 
    j["itemKey"] = v.itemKey; 
    j["itemName"] = v.itemName; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetTransaction& v) {
    v.transactionId = j.at("transactionId").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
    v.itemName = j.at("itemName").get<std::string>(); 
  }
}
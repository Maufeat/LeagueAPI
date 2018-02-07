#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetItemKey.hpp"
namespace lol {
  struct LolPurchaseWidgetTransaction { 
    std::string transactionId;
    LolPurchaseWidgetItemKey itemKey;
    std::string itemName;
    std::string iconUrl; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetTransaction& v) {
    j["transactionId"] = v.transactionId; 
    j["itemKey"] = v.itemKey; 
    j["itemName"] = v.itemName; 
    j["iconUrl"] = v.iconUrl; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetTransaction& v) {
    v.transactionId = j.at("transactionId").get<std::string>(); 
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
    v.itemName = j.at("itemName").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
  }
}
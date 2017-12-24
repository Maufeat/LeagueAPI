#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetItemKey.hpp"
namespace lol {
  struct LolPurchaseWidgetTransaction { 
    std::string transactionId;
    std::string itemName;
    std::string iconUrl;
    LolPurchaseWidgetItemKey itemKey; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetTransaction& v) {
    j["transactionId"] = v.transactionId; 
    j["itemName"] = v.itemName; 
    j["iconUrl"] = v.iconUrl; 
    j["itemKey"] = v.itemKey; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetTransaction& v) {
    v.transactionId = j.at("transactionId").get<std::string>(); 
    v.itemName = j.at("itemName").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetItemKey.hpp>
namespace lol {
  struct LolPurchaseWidgetTransaction { 
    LolPurchaseWidgetItemKey itemKey;
    std::string itemName;
    std::string iconUrl;
    std::string transactionId; 
  };
  void to_json(json& j, const LolPurchaseWidgetTransaction& v) {
    j["itemKey"] = v.itemKey; 
    j["itemName"] = v.itemName; 
    j["iconUrl"] = v.iconUrl; 
    j["transactionId"] = v.transactionId; 
  }
  void from_json(const json& j, LolPurchaseWidgetTransaction& v) {
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
    v.itemName = j.at("itemName").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.transactionId = j.at("transactionId").get<std::string>(); 
  }
}
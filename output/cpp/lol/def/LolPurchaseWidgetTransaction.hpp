#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetItemKey.hpp>
namespace lol {
  struct LolPurchaseWidgetTransaction { 
    std::string itemName;
    LolPurchaseWidgetItemKey itemKey;
    std::string transactionId;
    std::string iconUrl; 
  };
  void to_json(json& j, const LolPurchaseWidgetTransaction& v) {
  j["itemName"] = v.itemName; 
  j["itemKey"] = v.itemKey; 
  j["transactionId"] = v.transactionId; 
  j["iconUrl"] = v.iconUrl; 
  }
  void from_json(const json& j, LolPurchaseWidgetTransaction& v) {
  v.itemName = j.at("itemName").get<std::string>(); 
  v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>(); 
  v.transactionId = j.at("transactionId").get<std::string>(); 
  v.iconUrl = j.at("iconUrl").get<std::string>(); 
  }
}
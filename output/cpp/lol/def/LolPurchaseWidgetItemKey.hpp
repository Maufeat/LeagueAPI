#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPurchaseWidgetItemKey { 
    int32_t itemId;
    std::string inventoryType; 
  };
  void to_json(json& j, const LolPurchaseWidgetItemKey& v) {
  j["itemId"] = v.itemId; 
  j["inventoryType"] = v.inventoryType; 
  }
  void from_json(const json& j, LolPurchaseWidgetItemKey& v) {
  v.itemId = j.at("itemId").get<int32_t>(); 
  v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}
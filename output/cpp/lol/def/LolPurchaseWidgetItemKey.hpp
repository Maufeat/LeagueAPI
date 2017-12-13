#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPurchaseWidgetItemKey { 
    std::string inventoryType;
    int32_t itemId; 
  };
  void to_json(json& j, const LolPurchaseWidgetItemKey& v) {
  j["inventoryType"] = v.inventoryType; 
  j["itemId"] = v.itemId; 
  }
  void from_json(const json& j, LolPurchaseWidgetItemKey& v) {
  v.inventoryType = j.at("inventoryType").get<std::string>(); 
  v.itemId = j.at("itemId").get<int32_t>(); 
  }
}
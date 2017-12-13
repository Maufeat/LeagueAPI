#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolInventoryCatalogItem { 
    std::optional<std::string> itemInstanceId;
    std::string inventoryType;
    int32_t itemId; 
  };
  void to_json(json& j, const LolInventoryCatalogItem& v) {
  j["itemInstanceId"] = v.itemInstanceId; 
  j["inventoryType"] = v.inventoryType; 
  j["itemId"] = v.itemId; 
  }
  void from_json(const json& j, LolInventoryCatalogItem& v) {
  v.itemInstanceId = j.at("itemInstanceId").get<std::optional<std::string>>(); 
  v.inventoryType = j.at("inventoryType").get<std::string>(); 
  v.itemId = j.at("itemId").get<int32_t>(); 
  }
}
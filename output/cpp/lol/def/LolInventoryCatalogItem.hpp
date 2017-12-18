#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolInventoryCatalogItem { 
    std::optional<std::string> itemInstanceId;
    std::string inventoryType;
    int32_t itemId; 
  };
  inline void to_json(json& j, const LolInventoryCatalogItem& v) {
    if(v.itemInstanceId)
      j["itemInstanceId"] = *v.itemInstanceId;
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
  }
  inline void from_json(const json& j, LolInventoryCatalogItem& v) {
    if(auto it = j.find("itemInstanceId"); it != j.end() && !it->is_null())
      v.itemInstanceId = it->get<std::optional<std::string>>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
  }
}
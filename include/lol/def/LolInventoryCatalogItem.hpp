#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolInventoryCatalogItem { 
    int32_t itemId;
    std::string inventoryType;
    std::optional<std::string> itemInstanceId; 
  };
  inline void to_json(json& j, const LolInventoryCatalogItem& v) {
    j["itemId"] = v.itemId; 
    j["inventoryType"] = v.inventoryType; 
    if(v.itemInstanceId)
      j["itemInstanceId"] = *v.itemInstanceId;
  }
  inline void from_json(const json& j, LolInventoryCatalogItem& v) {
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    if(auto it = j.find("itemInstanceId"); it != j.end() && !it->is_null())
      v.itemInstanceId = it->get<std::optional<std::string>>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolInventoryCatalogItem { 
    std::optional<std::string> itemInstanceId;
    int32_t itemId;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const LolInventoryCatalogItem& v) {
    if(v.itemInstanceId)
      j["itemInstanceId"] = *v.itemInstanceId;
    j["itemId"] = v.itemId; 
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, LolInventoryCatalogItem& v) {
    if(auto it = j.find("itemInstanceId"); it != j.end() && !it->is_null())
      v.itemInstanceId = it->get<std::optional<std::string>>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}
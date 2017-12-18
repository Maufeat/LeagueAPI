#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoadoutsItemKey { 
    std::string inventoryType;
    int32_t itemId; 
  };
  inline void to_json(json& j, const LolLoadoutsItemKey& v) {
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
  }
  inline void from_json(const json& j, LolLoadoutsItemKey& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
  }
}
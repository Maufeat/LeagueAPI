#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolBannersLoadoutsSlot { 
    int64_t itemId;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const LolBannersLoadoutsSlot& v) {
    j["itemId"] = v.itemId; 
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, LolBannersLoadoutsSlot& v) {
    v.itemId = j.at("itemId").get<int64_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}
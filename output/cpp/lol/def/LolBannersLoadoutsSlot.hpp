#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolBannersLoadoutsSlot { 
    std::string inventoryType;
    int64_t itemId; 
  };
  void to_json(json& j, const LolBannersLoadoutsSlot& v) {
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
  }
  void from_json(const json& j, LolBannersLoadoutsSlot& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int64_t>(); 
  }
}
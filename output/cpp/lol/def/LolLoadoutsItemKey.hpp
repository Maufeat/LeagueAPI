#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoadoutsItemKey { 
    int32_t itemId;
    std::string inventoryType; 
  };
  void to_json(json& j, const LolLoadoutsItemKey& v) {
  j["itemId"] = v.itemId; 
  j["inventoryType"] = v.inventoryType; 
  }
  void from_json(const json& j, LolLoadoutsItemKey& v) {
  v.itemId = j.at("itemId").get<int32_t>(); 
  v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}
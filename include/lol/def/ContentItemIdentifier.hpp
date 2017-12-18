#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ContentItemIdentifier { 
    std::string inventoryType;
    int32_t itemId; 
  };
  inline void to_json(json& j, const ContentItemIdentifier& v) {
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
  }
  inline void from_json(const json& j, ContentItemIdentifier& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ContentItemIdentifier { 
    int32_t itemId;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const ContentItemIdentifier& v) {
    j["itemId"] = v.itemId; 
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, ContentItemIdentifier& v) {
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "LolStoreBundledItemCost.hpp"
namespace lol {
  struct LolStoreBundledItem { 
    std::string inventoryType;
    int32_t itemId;
    uint32_t quantity;
    std::vector<LolStoreBundledItemCost> discountPrices; 
  };
  inline void to_json(json& j, const LolStoreBundledItem& v) {
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
    j["quantity"] = v.quantity; 
    j["discountPrices"] = v.discountPrices; 
  }
  inline void from_json(const json& j, LolStoreBundledItem& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.quantity = j.at("quantity").get<uint32_t>(); 
    v.discountPrices = j.at("discountPrices").get<std::vector<LolStoreBundledItemCost>>(); 
  }
}
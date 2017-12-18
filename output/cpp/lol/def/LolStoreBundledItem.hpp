#pragma once
#include "../base_def.hpp" 
#include "LolStoreBundledItemCost.hpp"
namespace lol {
  struct LolStoreBundledItem { 
    uint32_t quantity;
    std::vector<LolStoreBundledItemCost> discountPrices;
    std::string inventoryType;
    int32_t itemId; 
  };
  inline void to_json(json& j, const LolStoreBundledItem& v) {
    j["quantity"] = v.quantity; 
    j["discountPrices"] = v.discountPrices; 
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
  }
  inline void from_json(const json& j, LolStoreBundledItem& v) {
    v.quantity = j.at("quantity").get<uint32_t>(); 
    v.discountPrices = j.at("discountPrices").get<std::vector<LolStoreBundledItemCost>>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
  }
}
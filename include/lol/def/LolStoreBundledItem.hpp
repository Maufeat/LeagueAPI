#pragma once
#include "../base_def.hpp" 
#include "LolStoreBundledItemCost.hpp"
namespace lol {
  struct LolStoreBundledItem { 
    uint32_t quantity;
    int32_t itemId;
    std::string inventoryType;
    std::vector<LolStoreBundledItemCost> discountPrices; 
  };
  inline void to_json(json& j, const LolStoreBundledItem& v) {
    j["quantity"] = v.quantity; 
    j["itemId"] = v.itemId; 
    j["inventoryType"] = v.inventoryType; 
    j["discountPrices"] = v.discountPrices; 
  }
  inline void from_json(const json& j, LolStoreBundledItem& v) {
    v.quantity = j.at("quantity").get<uint32_t>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.discountPrices = j.at("discountPrices").get<std::vector<LolStoreBundledItemCost>>(); 
  }
}
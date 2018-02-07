#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersPurchaseItem { 
    std::string inventoryType;
    int32_t itemId;
    int64_t pricePaid; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersPurchaseItem& v) {
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
    j["pricePaid"] = v.pricePaid; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersPurchaseItem& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.pricePaid = j.at("pricePaid").get<int64_t>(); 
  }
}
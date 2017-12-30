#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersPurchaseItem { 
    int64_t pricePaid;
    int32_t itemId;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersPurchaseItem& v) {
    j["pricePaid"] = v.pricePaid; 
    j["itemId"] = v.itemId; 
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersPurchaseItem& v) {
    v.pricePaid = j.at("pricePaid").get<int64_t>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}
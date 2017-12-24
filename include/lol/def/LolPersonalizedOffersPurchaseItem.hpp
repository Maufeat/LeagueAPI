#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersPurchaseItem { 
    int32_t itemId;
    int64_t pricePaid;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersPurchaseItem& v) {
    j["itemId"] = v.itemId; 
    j["pricePaid"] = v.pricePaid; 
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersPurchaseItem& v) {
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.pricePaid = j.at("pricePaid").get<int64_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}
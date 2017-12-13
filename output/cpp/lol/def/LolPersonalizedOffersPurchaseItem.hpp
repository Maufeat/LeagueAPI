#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPersonalizedOffersPurchaseItem { 
    int64_t pricePaid;
    std::string inventoryType;
    int32_t itemId; 
  };
  void to_json(json& j, const LolPersonalizedOffersPurchaseItem& v) {
    j["pricePaid"] = v.pricePaid; 
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
  }
  void from_json(const json& j, LolPersonalizedOffersPurchaseItem& v) {
    v.pricePaid = j.at("pricePaid").get<int64_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
  }
}
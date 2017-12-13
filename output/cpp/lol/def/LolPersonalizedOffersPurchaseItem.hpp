#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPersonalizedOffersPurchaseItem { 
    int32_t itemId;
    std::string inventoryType;
    int64_t pricePaid; 
  };
  void to_json(json& j, const LolPersonalizedOffersPurchaseItem& v) {
  j["itemId"] = v.itemId; 
  j["inventoryType"] = v.inventoryType; 
  j["pricePaid"] = v.pricePaid; 
  }
  void from_json(const json& j, LolPersonalizedOffersPurchaseItem& v) {
  v.itemId = j.at("itemId").get<int32_t>(); 
  v.inventoryType = j.at("inventoryType").get<std::string>(); 
  v.pricePaid = j.at("pricePaid").get<int64_t>(); 
  }
}
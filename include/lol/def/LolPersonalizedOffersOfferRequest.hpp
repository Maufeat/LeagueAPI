#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersOfferRequest { 
    std::string offerId;
    std::string inventoryType;
    int32_t itemId;
    int64_t price; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersOfferRequest& v) {
    j["offerId"] = v.offerId; 
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
    j["price"] = v.price; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersOfferRequest& v) {
    v.offerId = j.at("offerId").get<std::string>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.price = j.at("price").get<int64_t>(); 
  }
}
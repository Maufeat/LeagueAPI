#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersOfferRequest { 
    int64_t price;
    int32_t itemId;
    std::string inventoryType;
    std::string offerId; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersOfferRequest& v) {
    j["price"] = v.price; 
    j["itemId"] = v.itemId; 
    j["inventoryType"] = v.inventoryType; 
    j["offerId"] = v.offerId; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersOfferRequest& v) {
    v.price = j.at("price").get<int64_t>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.offerId = j.at("offerId").get<std::string>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersOfferRequest { 
    std::string offerId;
    int64_t price;
    int32_t itemId;
    std::string inventoryType; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersOfferRequest& v) {
    j["offerId"] = v.offerId; 
    j["price"] = v.price; 
    j["itemId"] = v.itemId; 
    j["inventoryType"] = v.inventoryType; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersOfferRequest& v) {
    v.offerId = j.at("offerId").get<std::string>(); 
    v.price = j.at("price").get<int64_t>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
  }
}
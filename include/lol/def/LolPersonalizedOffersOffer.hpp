#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersOffer { 
    std::string offerId;
    std::string inventoryType;
    int32_t itemId;
    int64_t originalPrice;
    int64_t discountPrice;
    std::string name;
    bool owned;
    bool revealed;
    std::string expirationDate;
    uint32_t spotIndex; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersOffer& v) {
    j["offerId"] = v.offerId; 
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
    j["originalPrice"] = v.originalPrice; 
    j["discountPrice"] = v.discountPrice; 
    j["name"] = v.name; 
    j["owned"] = v.owned; 
    j["revealed"] = v.revealed; 
    j["expirationDate"] = v.expirationDate; 
    j["spotIndex"] = v.spotIndex; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersOffer& v) {
    v.offerId = j.at("offerId").get<std::string>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.originalPrice = j.at("originalPrice").get<int64_t>(); 
    v.discountPrice = j.at("discountPrice").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.revealed = j.at("revealed").get<bool>(); 
    v.expirationDate = j.at("expirationDate").get<std::string>(); 
    v.spotIndex = j.at("spotIndex").get<uint32_t>(); 
  }
}
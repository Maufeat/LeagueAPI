#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersOffer { 
    std::string expirationDate;
    uint32_t spotIndex;
    int64_t originalPrice;
    bool revealed;
    std::string name;
    std::string offerId;
    bool owned;
    std::string inventoryType;
    int32_t itemId;
    int64_t discountPrice; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersOffer& v) {
    j["expirationDate"] = v.expirationDate; 
    j["spotIndex"] = v.spotIndex; 
    j["originalPrice"] = v.originalPrice; 
    j["revealed"] = v.revealed; 
    j["name"] = v.name; 
    j["offerId"] = v.offerId; 
    j["owned"] = v.owned; 
    j["inventoryType"] = v.inventoryType; 
    j["itemId"] = v.itemId; 
    j["discountPrice"] = v.discountPrice; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersOffer& v) {
    v.expirationDate = j.at("expirationDate").get<std::string>(); 
    v.spotIndex = j.at("spotIndex").get<uint32_t>(); 
    v.originalPrice = j.at("originalPrice").get<int64_t>(); 
    v.revealed = j.at("revealed").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.offerId = j.at("offerId").get<std::string>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.discountPrice = j.at("discountPrice").get<int64_t>(); 
  }
}
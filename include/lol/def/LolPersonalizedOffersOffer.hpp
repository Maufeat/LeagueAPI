#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersOffer { 
    int64_t originalPrice;
    std::string name;
    uint32_t spotIndex;
    bool owned;
    int32_t itemId;
    std::string inventoryType;
    bool revealed;
    std::string offerId;
    int64_t discountPrice;
    std::string expirationDate; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersOffer& v) {
    j["originalPrice"] = v.originalPrice; 
    j["name"] = v.name; 
    j["spotIndex"] = v.spotIndex; 
    j["owned"] = v.owned; 
    j["itemId"] = v.itemId; 
    j["inventoryType"] = v.inventoryType; 
    j["revealed"] = v.revealed; 
    j["offerId"] = v.offerId; 
    j["discountPrice"] = v.discountPrice; 
    j["expirationDate"] = v.expirationDate; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersOffer& v) {
    v.originalPrice = j.at("originalPrice").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.spotIndex = j.at("spotIndex").get<uint32_t>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.revealed = j.at("revealed").get<bool>(); 
    v.offerId = j.at("offerId").get<std::string>(); 
    v.discountPrice = j.at("discountPrice").get<int64_t>(); 
    v.expirationDate = j.at("expirationDate").get<std::string>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPersonalizedOffersOffer { 
    uint32_t spotIndex;
    int64_t originalPrice;
    std::string name;
    int32_t itemId;
    bool revealed;
    std::string expirationDate;
    int64_t discountPrice;
    bool owned;
    std::string inventoryType;
    std::string offerId; 
  };
  void to_json(json& j, const LolPersonalizedOffersOffer& v) {
  j["spotIndex"] = v.spotIndex; 
  j["originalPrice"] = v.originalPrice; 
  j["name"] = v.name; 
  j["itemId"] = v.itemId; 
  j["revealed"] = v.revealed; 
  j["expirationDate"] = v.expirationDate; 
  j["discountPrice"] = v.discountPrice; 
  j["owned"] = v.owned; 
  j["inventoryType"] = v.inventoryType; 
  j["offerId"] = v.offerId; 
  }
  void from_json(const json& j, LolPersonalizedOffersOffer& v) {
  v.spotIndex = j.at("spotIndex").get<uint32_t>(); 
  v.originalPrice = j.at("originalPrice").get<int64_t>(); 
  v.name = j.at("name").get<std::string>(); 
  v.itemId = j.at("itemId").get<int32_t>(); 
  v.revealed = j.at("revealed").get<bool>(); 
  v.expirationDate = j.at("expirationDate").get<std::string>(); 
  v.discountPrice = j.at("discountPrice").get<int64_t>(); 
  v.owned = j.at("owned").get<bool>(); 
  v.inventoryType = j.at("inventoryType").get<std::string>(); 
  v.offerId = j.at("offerId").get<std::string>(); 
  }
}
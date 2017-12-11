#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPersonalizedOffersOffer { /**/ 
    bool owned;/**/
    std::string expirationDate;/**/
    int32_t itemId;/**/
    std::string name;/**/
    bool revealed;/**/
    int64_t originalPrice;/**/
    uint32_t spotIndex;/**/
    std::string inventoryType;/**/
    std::string offerId;/**/
    int64_t discountPrice;/**/
  };
  static void to_json(json& j, const LolPersonalizedOffersOffer& v) { 
    j["owned"] = v.owned;
    j["expirationDate"] = v.expirationDate;
    j["itemId"] = v.itemId;
    j["name"] = v.name;
    j["revealed"] = v.revealed;
    j["originalPrice"] = v.originalPrice;
    j["spotIndex"] = v.spotIndex;
    j["inventoryType"] = v.inventoryType;
    j["offerId"] = v.offerId;
    j["discountPrice"] = v.discountPrice;
  }
  static void from_json(const json& j, LolPersonalizedOffersOffer& v) { 
    v.owned = j.at("owned").get<bool>(); 
    v.expirationDate = j.at("expirationDate").get<std::string>(); 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.revealed = j.at("revealed").get<bool>(); 
    v.originalPrice = j.at("originalPrice").get<int64_t>(); 
    v.spotIndex = j.at("spotIndex").get<uint32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.offerId = j.at("offerId").get<std::string>(); 
    v.discountPrice = j.at("discountPrice").get<int64_t>(); 
  }
} 
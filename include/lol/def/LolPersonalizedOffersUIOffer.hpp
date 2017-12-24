#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersUIOffer { 
    int32_t skinId;
    std::string expirationDate;
    int32_t championId;
    int64_t originalPrice;
    bool revealed;
    std::string id;
    int64_t discountPrice;
    std::string type;
    bool owned;
    std::string skinName; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersUIOffer& v) {
    j["skinId"] = v.skinId; 
    j["expirationDate"] = v.expirationDate; 
    j["championId"] = v.championId; 
    j["originalPrice"] = v.originalPrice; 
    j["revealed"] = v.revealed; 
    j["id"] = v.id; 
    j["discountPrice"] = v.discountPrice; 
    j["type"] = v.type; 
    j["owned"] = v.owned; 
    j["skinName"] = v.skinName; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersUIOffer& v) {
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.expirationDate = j.at("expirationDate").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.originalPrice = j.at("originalPrice").get<int64_t>(); 
    v.revealed = j.at("revealed").get<bool>(); 
    v.id = j.at("id").get<std::string>(); 
    v.discountPrice = j.at("discountPrice").get<int64_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
  }
}
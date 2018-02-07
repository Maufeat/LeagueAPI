#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersUIOffer { 
    std::string id;
    int64_t originalPrice;
    int64_t discountPrice;
    std::string type;
    std::string skinName;
    int32_t championId;
    int32_t skinId;
    bool owned;
    bool revealed;
    std::string expirationDate; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersUIOffer& v) {
    j["id"] = v.id; 
    j["originalPrice"] = v.originalPrice; 
    j["discountPrice"] = v.discountPrice; 
    j["type"] = v.type; 
    j["skinName"] = v.skinName; 
    j["championId"] = v.championId; 
    j["skinId"] = v.skinId; 
    j["owned"] = v.owned; 
    j["revealed"] = v.revealed; 
    j["expirationDate"] = v.expirationDate; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersUIOffer& v) {
    v.id = j.at("id").get<std::string>(); 
    v.originalPrice = j.at("originalPrice").get<int64_t>(); 
    v.discountPrice = j.at("discountPrice").get<int64_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.revealed = j.at("revealed").get<bool>(); 
    v.expirationDate = j.at("expirationDate").get<std::string>(); 
  }
}
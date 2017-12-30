#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersUIOffer { 
    int64_t originalPrice;
    std::string skinName;
    std::string id;
    int32_t skinId;
    bool owned;
    bool revealed;
    std::string type;
    int32_t championId;
    int64_t discountPrice;
    std::string expirationDate; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersUIOffer& v) {
    j["originalPrice"] = v.originalPrice; 
    j["skinName"] = v.skinName; 
    j["id"] = v.id; 
    j["skinId"] = v.skinId; 
    j["owned"] = v.owned; 
    j["revealed"] = v.revealed; 
    j["type"] = v.type; 
    j["championId"] = v.championId; 
    j["discountPrice"] = v.discountPrice; 
    j["expirationDate"] = v.expirationDate; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersUIOffer& v) {
    v.originalPrice = j.at("originalPrice").get<int64_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.revealed = j.at("revealed").get<bool>(); 
    v.type = j.at("type").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.discountPrice = j.at("discountPrice").get<int64_t>(); 
    v.expirationDate = j.at("expirationDate").get<std::string>(); 
  }
}
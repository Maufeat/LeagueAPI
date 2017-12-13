#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPersonalizedOffersUIOffer { 
    bool owned;
    int32_t skinId;
    bool revealed;
    std::string id;
    std::string expirationDate;
    std::string type;
    std::string skinName;
    int64_t originalPrice;
    int32_t championId;
    int64_t discountPrice; 
  };
  void to_json(json& j, const LolPersonalizedOffersUIOffer& v) {
  j["owned"] = v.owned; 
  j["skinId"] = v.skinId; 
  j["revealed"] = v.revealed; 
  j["id"] = v.id; 
  j["expirationDate"] = v.expirationDate; 
  j["type"] = v.type; 
  j["skinName"] = v.skinName; 
  j["originalPrice"] = v.originalPrice; 
  j["championId"] = v.championId; 
  j["discountPrice"] = v.discountPrice; 
  }
  void from_json(const json& j, LolPersonalizedOffersUIOffer& v) {
  v.owned = j.at("owned").get<bool>(); 
  v.skinId = j.at("skinId").get<int32_t>(); 
  v.revealed = j.at("revealed").get<bool>(); 
  v.id = j.at("id").get<std::string>(); 
  v.expirationDate = j.at("expirationDate").get<std::string>(); 
  v.type = j.at("type").get<std::string>(); 
  v.skinName = j.at("skinName").get<std::string>(); 
  v.originalPrice = j.at("originalPrice").get<int64_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.discountPrice = j.at("discountPrice").get<int64_t>(); 
  }
}
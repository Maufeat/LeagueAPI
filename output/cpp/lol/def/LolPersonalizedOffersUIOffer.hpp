#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPersonalizedOffersUIOffer { 
    int64_t originalPrice;
    int32_t skinId;
    std::string type;
    int64_t discountPrice;
    bool revealed;
    std::string skinName;
    std::string expirationDate;
    bool owned;
    int32_t championId;
    std::string id; 
  };
  void to_json(json& j, const LolPersonalizedOffersUIOffer& v) {
  j["originalPrice"] = v.originalPrice; 
  j["skinId"] = v.skinId; 
  j["type"] = v.type; 
  j["discountPrice"] = v.discountPrice; 
  j["revealed"] = v.revealed; 
  j["skinName"] = v.skinName; 
  j["expirationDate"] = v.expirationDate; 
  j["owned"] = v.owned; 
  j["championId"] = v.championId; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolPersonalizedOffersUIOffer& v) {
  v.originalPrice = j.at("originalPrice").get<int64_t>(); 
  v.skinId = j.at("skinId").get<int32_t>(); 
  v.type = j.at("type").get<std::string>(); 
  v.discountPrice = j.at("discountPrice").get<int64_t>(); 
  v.revealed = j.at("revealed").get<bool>(); 
  v.skinName = j.at("skinName").get<std::string>(); 
  v.expirationDate = j.at("expirationDate").get<std::string>(); 
  v.owned = j.at("owned").get<bool>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.id = j.at("id").get<std::string>(); 
  }
}
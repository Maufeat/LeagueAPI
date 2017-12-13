#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsCollectionsRental { 
    bool rented;
    int32_t winCountRemaining;
    uint64_t endDate;
    uint64_t purchaseDate; 
  };
  void to_json(json& j, const LolCollectionsCollectionsRental& v) {
  j["rented"] = v.rented; 
  j["winCountRemaining"] = v.winCountRemaining; 
  j["endDate"] = v.endDate; 
  j["purchaseDate"] = v.purchaseDate; 
  }
  void from_json(const json& j, LolCollectionsCollectionsRental& v) {
  v.rented = j.at("rented").get<bool>(); 
  v.winCountRemaining = j.at("winCountRemaining").get<int32_t>(); 
  v.endDate = j.at("endDate").get<uint64_t>(); 
  v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampionsCollectionsRental { 
    bool rented;
    int32_t winCountRemaining;
    uint64_t endDate;
    uint64_t purchaseDate; 
  };
  void to_json(json& j, const LolChampionsCollectionsRental& v) {
  j["rented"] = v.rented; 
  j["winCountRemaining"] = v.winCountRemaining; 
  j["endDate"] = v.endDate; 
  j["purchaseDate"] = v.purchaseDate; 
  }
  void from_json(const json& j, LolChampionsCollectionsRental& v) {
  v.rented = j.at("rented").get<bool>(); 
  v.winCountRemaining = j.at("winCountRemaining").get<int32_t>(); 
  v.endDate = j.at("endDate").get<uint64_t>(); 
  v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
  }
}
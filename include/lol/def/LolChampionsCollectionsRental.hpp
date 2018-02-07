#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampionsCollectionsRental { 
    uint64_t endDate;
    uint64_t purchaseDate;
    int32_t winCountRemaining;
    bool rented; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsRental& v) {
    j["endDate"] = v.endDate; 
    j["purchaseDate"] = v.purchaseDate; 
    j["winCountRemaining"] = v.winCountRemaining; 
    j["rented"] = v.rented; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsRental& v) {
    v.endDate = j.at("endDate").get<uint64_t>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>(); 
    v.rented = j.at("rented").get<bool>(); 
  }
}
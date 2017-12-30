#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsCollectionsRental { 
    uint64_t purchaseDate;
    uint64_t endDate;
    bool rented;
    int32_t winCountRemaining; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsRental& v) {
    j["purchaseDate"] = v.purchaseDate; 
    j["endDate"] = v.endDate; 
    j["rented"] = v.rented; 
    j["winCountRemaining"] = v.winCountRemaining; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsRental& v) {
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.endDate = j.at("endDate").get<uint64_t>(); 
    v.rented = j.at("rented").get<bool>(); 
    v.winCountRemaining = j.at("winCountRemaining").get<int32_t>(); 
  }
}
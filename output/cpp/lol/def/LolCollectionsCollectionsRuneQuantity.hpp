#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsCollectionsRuneQuantity { 
    int32_t quantity;
    uint32_t runeId; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsRuneQuantity& v) {
    j["quantity"] = v.quantity; 
    j["runeId"] = v.runeId; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsRuneQuantity& v) {
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.runeId = j.at("runeId").get<uint32_t>(); 
  }
}
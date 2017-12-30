#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsCollectionsRuneQuantity { 
    uint32_t runeId;
    int32_t quantity; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsRuneQuantity& v) {
    j["runeId"] = v.runeId; 
    j["quantity"] = v.quantity; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsRuneQuantity& v) {
    v.runeId = j.at("runeId").get<uint32_t>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
  }
}
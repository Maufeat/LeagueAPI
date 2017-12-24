#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolItemSetsPreferredItemSlot { 
    std::string id;
    int16_t preferredItemSlot; 
  };
  inline void to_json(json& j, const LolItemSetsPreferredItemSlot& v) {
    j["id"] = v.id; 
    j["preferredItemSlot"] = v.preferredItemSlot; 
  }
  inline void from_json(const json& j, LolItemSetsPreferredItemSlot& v) {
    v.id = j.at("id").get<std::string>(); 
    v.preferredItemSlot = j.at("preferredItemSlot").get<int16_t>(); 
  }
}
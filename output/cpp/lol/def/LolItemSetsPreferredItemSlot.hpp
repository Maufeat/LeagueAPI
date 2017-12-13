#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolItemSetsPreferredItemSlot { 
    int16_t preferredItemSlot;
    std::string id; 
  };
  void to_json(json& j, const LolItemSetsPreferredItemSlot& v) {
    j["preferredItemSlot"] = v.preferredItemSlot; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolItemSetsPreferredItemSlot& v) {
    v.preferredItemSlot = j.at("preferredItemSlot").get<int16_t>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}
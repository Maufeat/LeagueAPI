#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPerksPlayerInventory { 
    uint32_t ownedPageCount; 
  };
  inline void to_json(json& j, const LolPerksPlayerInventory& v) {
    j["ownedPageCount"] = v.ownedPageCount; 
  }
  inline void from_json(const json& j, LolPerksPlayerInventory& v) {
    v.ownedPageCount = j.at("ownedPageCount").get<uint32_t>(); 
  }
}
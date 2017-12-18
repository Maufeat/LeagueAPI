#pragma once
#include "../base_def.hpp" 
#include "LootItemClientDTO.hpp"
namespace lol {
  struct LootItemListClientDTO { 
    std::vector<LootItemClientDTO> lootItems;
    int64_t lastUpdate; 
  };
  inline void to_json(json& j, const LootItemListClientDTO& v) {
    j["lootItems"] = v.lootItems; 
    j["lastUpdate"] = v.lastUpdate; 
  }
  inline void from_json(const json& j, LootItemListClientDTO& v) {
    v.lootItems = j.at("lootItems").get<std::vector<LootItemClientDTO>>(); 
    v.lastUpdate = j.at("lastUpdate").get<int64_t>(); 
  }
}
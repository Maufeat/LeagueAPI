#pragma once
#include "../base_def.hpp" 
#include "LootItemClientDTO.hpp"
namespace lol {
  struct LootItemListClientDTO { 
    int64_t lastUpdate;
    std::vector<LootItemClientDTO> lootItems; 
  };
  inline void to_json(json& j, const LootItemListClientDTO& v) {
    j["lastUpdate"] = v.lastUpdate; 
    j["lootItems"] = v.lootItems; 
  }
  inline void from_json(const json& j, LootItemListClientDTO& v) {
    v.lastUpdate = j.at("lastUpdate").get<int64_t>(); 
    v.lootItems = j.at("lootItems").get<std::vector<LootItemClientDTO>>(); 
  }
}
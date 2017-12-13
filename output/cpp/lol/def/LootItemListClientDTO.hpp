#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LootItemClientDTO.hpp>
namespace lol {
  struct LootItemListClientDTO { 
    int64_t lastUpdate;
    std::vector<LootItemClientDTO> lootItems; 
  };
  void to_json(json& j, const LootItemListClientDTO& v) {
  j["lastUpdate"] = v.lastUpdate; 
  j["lootItems"] = v.lootItems; 
  }
  void from_json(const json& j, LootItemListClientDTO& v) {
  v.lastUpdate = j.at("lastUpdate").get<int64_t>(); 
  v.lootItems = j.at("lootItems").get<std::vector<LootItemClientDTO>>(); 
  }
}
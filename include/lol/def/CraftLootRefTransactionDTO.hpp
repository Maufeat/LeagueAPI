#pragma once
#include "../base_def.hpp" 
#include "LootNameRefId.hpp"
namespace lol {
  struct CraftLootRefTransactionDTO { 
    std::vector<LootNameRefId> lootNameRefIds;
    std::string recipeName;
    int32_t repeat; 
  };
  inline void to_json(json& j, const CraftLootRefTransactionDTO& v) {
    j["lootNameRefIds"] = v.lootNameRefIds; 
    j["recipeName"] = v.recipeName; 
    j["repeat"] = v.repeat; 
  }
  inline void from_json(const json& j, CraftLootRefTransactionDTO& v) {
    v.lootNameRefIds = j.at("lootNameRefIds").get<std::vector<LootNameRefId>>(); 
    v.recipeName = j.at("recipeName").get<std::string>(); 
    v.repeat = j.at("repeat").get<int32_t>(); 
  }
}
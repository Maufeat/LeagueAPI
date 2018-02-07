#pragma once
#include "../base_def.hpp" 
#include "LootNameRefId.hpp"
namespace lol {
  struct CraftLootRefTransactionDTO { 
    std::string recipeName;
    std::vector<LootNameRefId> lootNameRefIds;
    int32_t repeat; 
  };
  inline void to_json(json& j, const CraftLootRefTransactionDTO& v) {
    j["recipeName"] = v.recipeName; 
    j["lootNameRefIds"] = v.lootNameRefIds; 
    j["repeat"] = v.repeat; 
  }
  inline void from_json(const json& j, CraftLootRefTransactionDTO& v) {
    v.recipeName = j.at("recipeName").get<std::string>(); 
    v.lootNameRefIds = j.at("lootNameRefIds").get<std::vector<LootNameRefId>>(); 
    v.repeat = j.at("repeat").get<int32_t>(); 
  }
}
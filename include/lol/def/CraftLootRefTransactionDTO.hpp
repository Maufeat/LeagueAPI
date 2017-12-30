#pragma once
#include "../base_def.hpp" 
#include "LootNameRefId.hpp"
namespace lol {
  struct CraftLootRefTransactionDTO { 
    std::vector<LootNameRefId> lootNameRefIds;
    int32_t repeat;
    std::string recipeName; 
  };
  inline void to_json(json& j, const CraftLootRefTransactionDTO& v) {
    j["lootNameRefIds"] = v.lootNameRefIds; 
    j["repeat"] = v.repeat; 
    j["recipeName"] = v.recipeName; 
  }
  inline void from_json(const json& j, CraftLootRefTransactionDTO& v) {
    v.lootNameRefIds = j.at("lootNameRefIds").get<std::vector<LootNameRefId>>(); 
    v.repeat = j.at("repeat").get<int32_t>(); 
    v.recipeName = j.at("recipeName").get<std::string>(); 
  }
}
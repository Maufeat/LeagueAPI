#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LootNameRefId.hpp>
namespace lol {
  struct CraftLootRefTransactionDTO { 
    int32_t repeat;
    std::string recipeName;
    std::vector<LootNameRefId> lootNameRefIds; 
  };
  void to_json(json& j, const CraftLootRefTransactionDTO& v) {
    j["repeat"] = v.repeat; 
    j["recipeName"] = v.recipeName; 
    j["lootNameRefIds"] = v.lootNameRefIds; 
  }
  void from_json(const json& j, CraftLootRefTransactionDTO& v) {
    v.repeat = j.at("repeat").get<int32_t>(); 
    v.recipeName = j.at("recipeName").get<std::string>(); 
    v.lootNameRefIds = j.at("lootNameRefIds").get<std::vector<LootNameRefId>>(); 
  }
}
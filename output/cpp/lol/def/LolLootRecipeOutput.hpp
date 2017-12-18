#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootRecipeOutput { 
    int32_t quantity;
    std::string lootName; 
  };
  inline void to_json(json& j, const LolLootRecipeOutput& v) {
    j["quantity"] = v.quantity; 
    j["lootName"] = v.lootName; 
  }
  inline void from_json(const json& j, LolLootRecipeOutput& v) {
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
  }
}
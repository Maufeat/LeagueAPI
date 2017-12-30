#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootRecipeOutput { 
    std::string lootName;
    int32_t quantity; 
  };
  inline void to_json(json& j, const LolLootRecipeOutput& v) {
    j["lootName"] = v.lootName; 
    j["quantity"] = v.quantity; 
  }
  inline void from_json(const json& j, LolLootRecipeOutput& v) {
    v.lootName = j.at("lootName").get<std::string>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
  }
}
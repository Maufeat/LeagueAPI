#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LootLcdsRecipeClientDTO.hpp>
namespace lol {
  struct LootLcdsRecipeListClientDTO { 
    std::vector<LootLcdsRecipeClientDTO> recipes;
    int64_t lastUpdate; 
  };
  void to_json(json& j, const LootLcdsRecipeListClientDTO& v) {
  j["recipes"] = v.recipes; 
  j["lastUpdate"] = v.lastUpdate; 
  }
  void from_json(const json& j, LootLcdsRecipeListClientDTO& v) {
  v.recipes = j.at("recipes").get<std::vector<LootLcdsRecipeClientDTO>>(); 
  v.lastUpdate = j.at("lastUpdate").get<int64_t>(); 
  }
}
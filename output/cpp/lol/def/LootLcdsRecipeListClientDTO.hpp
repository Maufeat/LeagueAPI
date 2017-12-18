#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LootLcdsRecipeClientDTO.hpp>
namespace lol {
  struct LootLcdsRecipeListClientDTO { 
    int64_t lastUpdate;
    std::vector<LootLcdsRecipeClientDTO> recipes; 
  };
  inline void to_json(json& j, const LootLcdsRecipeListClientDTO& v) {
    j["lastUpdate"] = v.lastUpdate; 
    j["recipes"] = v.recipes; 
  }
  inline void from_json(const json& j, LootLcdsRecipeListClientDTO& v) {
    v.lastUpdate = j.at("lastUpdate").get<int64_t>(); 
    v.recipes = j.at("recipes").get<std::vector<LootLcdsRecipeClientDTO>>(); 
  }
}
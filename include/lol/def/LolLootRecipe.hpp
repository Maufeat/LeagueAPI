#pragma once
#include "../base_def.hpp" 
#include "LolLootRecipeOutput.hpp"
#include "LolLootRecipeSlot.hpp"
#include "LolLootRecipeMetadata.hpp"
namespace lol {
  struct LolLootRecipe { 
    std::string crafterName;
    std::string type;
    std::string recipeName;
    std::string displayCategories;
    std::vector<LolLootRecipeSlot> slots;
    std::vector<LolLootRecipeOutput> outputs;
    LolLootRecipeMetadata metadata; 
  };
  inline void to_json(json& j, const LolLootRecipe& v) {
    j["crafterName"] = v.crafterName; 
    j["type"] = v.type; 
    j["recipeName"] = v.recipeName; 
    j["displayCategories"] = v.displayCategories; 
    j["slots"] = v.slots; 
    j["outputs"] = v.outputs; 
    j["metadata"] = v.metadata; 
  }
  inline void from_json(const json& j, LolLootRecipe& v) {
    v.crafterName = j.at("crafterName").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.recipeName = j.at("recipeName").get<std::string>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
    v.slots = j.at("slots").get<std::vector<LolLootRecipeSlot>>(); 
    v.outputs = j.at("outputs").get<std::vector<LolLootRecipeOutput>>(); 
    v.metadata = j.at("metadata").get<LolLootRecipeMetadata>(); 
  }
}
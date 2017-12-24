#pragma once
#include "../base_def.hpp" 
#include "LolLootRecipeSlot.hpp"
#include "LolLootRecipeOutput.hpp"
#include "LolLootRecipeMetadata.hpp"
namespace lol {
  struct LolLootRecipe { 
    std::string recipeName;
    LolLootRecipeMetadata metadata;
    std::vector<LolLootRecipeOutput> outputs;
    std::string displayCategories;
    std::string type;
    std::string crafterName;
    std::vector<LolLootRecipeSlot> slots; 
  };
  inline void to_json(json& j, const LolLootRecipe& v) {
    j["recipeName"] = v.recipeName; 
    j["metadata"] = v.metadata; 
    j["outputs"] = v.outputs; 
    j["displayCategories"] = v.displayCategories; 
    j["type"] = v.type; 
    j["crafterName"] = v.crafterName; 
    j["slots"] = v.slots; 
  }
  inline void from_json(const json& j, LolLootRecipe& v) {
    v.recipeName = j.at("recipeName").get<std::string>(); 
    v.metadata = j.at("metadata").get<LolLootRecipeMetadata>(); 
    v.outputs = j.at("outputs").get<std::vector<LolLootRecipeOutput>>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.crafterName = j.at("crafterName").get<std::string>(); 
    v.slots = j.at("slots").get<std::vector<LolLootRecipeSlot>>(); 
  }
}
#pragma once
#include "../base_def.hpp" 
#include "LolLootRecipeSlot.hpp"
#include "LolLootRecipeOutput.hpp"
#include "LolLootRecipeMetadata.hpp"
namespace lol {
  struct LolLootRecipe { 
    std::string recipeName;
    std::vector<LolLootRecipeOutput> outputs;
    std::vector<LolLootRecipeSlot> slots;
    LolLootRecipeMetadata metadata;
    std::string type;
    std::string crafterName;
    std::string displayCategories; 
  };
  inline void to_json(json& j, const LolLootRecipe& v) {
    j["recipeName"] = v.recipeName; 
    j["outputs"] = v.outputs; 
    j["slots"] = v.slots; 
    j["metadata"] = v.metadata; 
    j["type"] = v.type; 
    j["crafterName"] = v.crafterName; 
    j["displayCategories"] = v.displayCategories; 
  }
  inline void from_json(const json& j, LolLootRecipe& v) {
    v.recipeName = j.at("recipeName").get<std::string>(); 
    v.outputs = j.at("outputs").get<std::vector<LolLootRecipeOutput>>(); 
    v.slots = j.at("slots").get<std::vector<LolLootRecipeSlot>>(); 
    v.metadata = j.at("metadata").get<LolLootRecipeMetadata>(); 
    v.type = j.at("type").get<std::string>(); 
    v.crafterName = j.at("crafterName").get<std::string>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
  }
}
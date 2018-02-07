#pragma once
#include "../base_def.hpp" 
#include "LolLootRecipeMetadata.hpp"
#include "LolLootRecipeSlot.hpp"
#include "LolLootRecipeOutput.hpp"
namespace lol {
  struct LolLootRecipe { 
    std::string recipeName;
    std::string type;
    std::string description;
    std::string imagePath;
    std::string displayCategories;
    std::string crafterName;
    std::vector<LolLootRecipeSlot> slots;
    std::vector<LolLootRecipeOutput> outputs;
    LolLootRecipeMetadata metadata; 
  };
  inline void to_json(json& j, const LolLootRecipe& v) {
    j["recipeName"] = v.recipeName; 
    j["type"] = v.type; 
    j["description"] = v.description; 
    j["imagePath"] = v.imagePath; 
    j["displayCategories"] = v.displayCategories; 
    j["crafterName"] = v.crafterName; 
    j["slots"] = v.slots; 
    j["outputs"] = v.outputs; 
    j["metadata"] = v.metadata; 
  }
  inline void from_json(const json& j, LolLootRecipe& v) {
    v.recipeName = j.at("recipeName").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.imagePath = j.at("imagePath").get<std::string>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
    v.crafterName = j.at("crafterName").get<std::string>(); 
    v.slots = j.at("slots").get<std::vector<LolLootRecipeSlot>>(); 
    v.outputs = j.at("outputs").get<std::vector<LolLootRecipeOutput>>(); 
    v.metadata = j.at("metadata").get<LolLootRecipeMetadata>(); 
  }
}
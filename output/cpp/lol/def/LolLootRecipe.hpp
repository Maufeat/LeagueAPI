#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootRecipeMetadata.hpp>
#include <lol/def/LolLootRecipeOutput.hpp>
#include <lol/def/LolLootRecipeSlot.hpp>
namespace lol {
  struct LolLootRecipe { 
    LolLootRecipeMetadata metadata;
    std::vector<LolLootRecipeSlot> slots;
    std::vector<LolLootRecipeOutput> outputs;
    std::string displayCategories;
    std::string type;
    std::string recipeName;
    std::string crafterName; 
  };
  void to_json(json& j, const LolLootRecipe& v) {
  j["metadata"] = v.metadata; 
  j["slots"] = v.slots; 
  j["outputs"] = v.outputs; 
  j["displayCategories"] = v.displayCategories; 
  j["type"] = v.type; 
  j["recipeName"] = v.recipeName; 
  j["crafterName"] = v.crafterName; 
  }
  void from_json(const json& j, LolLootRecipe& v) {
  v.metadata = j.at("metadata").get<LolLootRecipeMetadata>(); 
  v.slots = j.at("slots").get<std::vector<LolLootRecipeSlot>>(); 
  v.outputs = j.at("outputs").get<std::vector<LolLootRecipeOutput>>(); 
  v.displayCategories = j.at("displayCategories").get<std::string>(); 
  v.type = j.at("type").get<std::string>(); 
  v.recipeName = j.at("recipeName").get<std::string>(); 
  v.crafterName = j.at("crafterName").get<std::string>(); 
  }
}
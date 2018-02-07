#pragma once
#include "../base_def.hpp" 
#include "LootLcdsRecipeMetadata.hpp"
#include "LootLcdsRecipeSlotClientDTO.hpp"
#include "LootLcdsRecipeOutputDTO.hpp"
namespace lol {
  struct LootLcdsRecipeClientDTO { 
    std::string recipeName;
    std::string type;
    std::string displayCategories;
    std::string crafterName;
    std::vector<LootLcdsRecipeSlotClientDTO> slots;
    std::vector<LootLcdsRecipeOutputDTO> outputs;
    LootLcdsRecipeMetadata metadata; 
  };
  inline void to_json(json& j, const LootLcdsRecipeClientDTO& v) {
    j["recipeName"] = v.recipeName; 
    j["type"] = v.type; 
    j["displayCategories"] = v.displayCategories; 
    j["crafterName"] = v.crafterName; 
    j["slots"] = v.slots; 
    j["outputs"] = v.outputs; 
    j["metadata"] = v.metadata; 
  }
  inline void from_json(const json& j, LootLcdsRecipeClientDTO& v) {
    v.recipeName = j.at("recipeName").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
    v.crafterName = j.at("crafterName").get<std::string>(); 
    v.slots = j.at("slots").get<std::vector<LootLcdsRecipeSlotClientDTO>>(); 
    v.outputs = j.at("outputs").get<std::vector<LootLcdsRecipeOutputDTO>>(); 
    v.metadata = j.at("metadata").get<LootLcdsRecipeMetadata>(); 
  }
}
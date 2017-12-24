#pragma once
#include "../base_def.hpp" 
#include "LootLcdsRecipeSlotClientDTO.hpp"
#include "LootLcdsRecipeMetadata.hpp"
#include "LootLcdsRecipeOutputDTO.hpp"
namespace lol {
  struct LootLcdsRecipeClientDTO { 
    std::string recipeName;
    LootLcdsRecipeMetadata metadata;
    std::vector<LootLcdsRecipeOutputDTO> outputs;
    std::string displayCategories;
    std::string type;
    std::string crafterName;
    std::vector<LootLcdsRecipeSlotClientDTO> slots; 
  };
  inline void to_json(json& j, const LootLcdsRecipeClientDTO& v) {
    j["recipeName"] = v.recipeName; 
    j["metadata"] = v.metadata; 
    j["outputs"] = v.outputs; 
    j["displayCategories"] = v.displayCategories; 
    j["type"] = v.type; 
    j["crafterName"] = v.crafterName; 
    j["slots"] = v.slots; 
  }
  inline void from_json(const json& j, LootLcdsRecipeClientDTO& v) {
    v.recipeName = j.at("recipeName").get<std::string>(); 
    v.metadata = j.at("metadata").get<LootLcdsRecipeMetadata>(); 
    v.outputs = j.at("outputs").get<std::vector<LootLcdsRecipeOutputDTO>>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.crafterName = j.at("crafterName").get<std::string>(); 
    v.slots = j.at("slots").get<std::vector<LootLcdsRecipeSlotClientDTO>>(); 
  }
}
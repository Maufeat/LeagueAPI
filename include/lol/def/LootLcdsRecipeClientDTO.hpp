#pragma once
#include "../base_def.hpp" 
#include "LootLcdsRecipeOutputDTO.hpp"
#include "LootLcdsRecipeMetadata.hpp"
#include "LootLcdsRecipeSlotClientDTO.hpp"
namespace lol {
  struct LootLcdsRecipeClientDTO { 
    std::string recipeName;
    std::vector<LootLcdsRecipeOutputDTO> outputs;
    std::vector<LootLcdsRecipeSlotClientDTO> slots;
    LootLcdsRecipeMetadata metadata;
    std::string type;
    std::string crafterName;
    std::string displayCategories; 
  };
  inline void to_json(json& j, const LootLcdsRecipeClientDTO& v) {
    j["recipeName"] = v.recipeName; 
    j["outputs"] = v.outputs; 
    j["slots"] = v.slots; 
    j["metadata"] = v.metadata; 
    j["type"] = v.type; 
    j["crafterName"] = v.crafterName; 
    j["displayCategories"] = v.displayCategories; 
  }
  inline void from_json(const json& j, LootLcdsRecipeClientDTO& v) {
    v.recipeName = j.at("recipeName").get<std::string>(); 
    v.outputs = j.at("outputs").get<std::vector<LootLcdsRecipeOutputDTO>>(); 
    v.slots = j.at("slots").get<std::vector<LootLcdsRecipeSlotClientDTO>>(); 
    v.metadata = j.at("metadata").get<LootLcdsRecipeMetadata>(); 
    v.type = j.at("type").get<std::string>(); 
    v.crafterName = j.at("crafterName").get<std::string>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
  }
}
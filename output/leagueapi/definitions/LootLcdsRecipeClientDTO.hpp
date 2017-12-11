#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LootLcdsRecipeOutputDTO.hpp>"
#include "<leagueapi/definitions/LootLcdsRecipeSlotClientDTO.hpp>"
#include "<leagueapi/definitions/LootLcdsRecipeMetadata.hpp>"

namespace leagueapi {
  struct LootLcdsRecipeClientDTO { /**/ 
    LootLcdsRecipeMetadata metadata;/**/
    std::vector<LootLcdsRecipeSlotClientDTO> slots;/**/
    std::vector<LootLcdsRecipeOutputDTO> outputs;/**/
    std::string displayCategories;/**/
    std::string type;/**/
    std::string recipeName;/**/
    std::string crafterName;/**/
  };
  static void to_json(json& j, const LootLcdsRecipeClientDTO& v) { 
    j["metadata"] = v.metadata;
    j["slots"] = v.slots;
    j["outputs"] = v.outputs;
    j["displayCategories"] = v.displayCategories;
    j["type"] = v.type;
    j["recipeName"] = v.recipeName;
    j["crafterName"] = v.crafterName;
  }
  static void from_json(const json& j, LootLcdsRecipeClientDTO& v) { 
    v.metadata = j.at("metadata").get<LootLcdsRecipeMetadata>(); 
    v.slots = j.at("slots").get<std::vector<LootLcdsRecipeSlotClientDTO>>(); 
    v.outputs = j.at("outputs").get<std::vector<LootLcdsRecipeOutputDTO>>(); 
    v.displayCategories = j.at("displayCategories").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.recipeName = j.at("recipeName").get<std::string>(); 
    v.crafterName = j.at("crafterName").get<std::string>(); 
  }
} 
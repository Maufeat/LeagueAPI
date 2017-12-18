#pragma once
#include "../base_def.hpp" 
#include "LootLcdsLootDescriptionDTO.hpp"
namespace lol {
  struct LootLcdsRecipeMetadata { 
    std::vector<LootLcdsLootDescriptionDTO> guaranteedDescriptions;
    std::vector<LootLcdsLootDescriptionDTO> bonusDescriptions;
    bool tooltipsDisabled; 
  };
  inline void to_json(json& j, const LootLcdsRecipeMetadata& v) {
    j["guaranteedDescriptions"] = v.guaranteedDescriptions; 
    j["bonusDescriptions"] = v.bonusDescriptions; 
    j["tooltipsDisabled"] = v.tooltipsDisabled; 
  }
  inline void from_json(const json& j, LootLcdsRecipeMetadata& v) {
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LootLcdsLootDescriptionDTO>>(); 
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LootLcdsLootDescriptionDTO>>(); 
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>(); 
  }
}
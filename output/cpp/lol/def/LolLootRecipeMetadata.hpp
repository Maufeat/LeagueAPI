#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootLootDescription.hpp>
namespace lol {
  struct LolLootRecipeMetadata { 
    std::vector<LolLootLootDescription> bonusDescriptions;
    bool tooltipsDisabled;
    std::vector<LolLootLootDescription> guaranteedDescriptions; 
  };
  void to_json(json& j, const LolLootRecipeMetadata& v) {
  j["bonusDescriptions"] = v.bonusDescriptions; 
  j["tooltipsDisabled"] = v.tooltipsDisabled; 
  j["guaranteedDescriptions"] = v.guaranteedDescriptions; 
  }
  void from_json(const json& j, LolLootRecipeMetadata& v) {
  v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LolLootLootDescription>>(); 
  v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>(); 
  v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LolLootLootDescription>>(); 
  }
}
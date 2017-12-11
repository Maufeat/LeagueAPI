#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LootLcdsLootDescriptionDTO.hpp>"

namespace leagueapi {
  struct LootLcdsRecipeMetadata { /**/ 
    std::vector<LootLcdsLootDescriptionDTO> bonusDescriptions;/**/
    bool tooltipsDisabled;/**/
    std::vector<LootLcdsLootDescriptionDTO> guaranteedDescriptions;/**/
  };
  static void to_json(json& j, const LootLcdsRecipeMetadata& v) { 
    j["bonusDescriptions"] = v.bonusDescriptions;
    j["tooltipsDisabled"] = v.tooltipsDisabled;
    j["guaranteedDescriptions"] = v.guaranteedDescriptions;
  }
  static void from_json(const json& j, LootLcdsRecipeMetadata& v) { 
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LootLcdsLootDescriptionDTO>>(); 
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>(); 
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LootLcdsLootDescriptionDTO>>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLootLootDescription.hpp>"

namespace leagueapi {
  struct LolLootRecipeMetadata { /**/ 
    std::vector<LolLootLootDescription> bonusDescriptions;/**/
    bool tooltipsDisabled;/**/
    std::vector<LolLootLootDescription> guaranteedDescriptions;/**/
  };
  static void to_json(json& j, const LolLootRecipeMetadata& v) { 
    j["bonusDescriptions"] = v.bonusDescriptions;
    j["tooltipsDisabled"] = v.tooltipsDisabled;
    j["guaranteedDescriptions"] = v.guaranteedDescriptions;
  }
  static void from_json(const json& j, LolLootRecipeMetadata& v) { 
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LolLootLootDescription>>(); 
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>(); 
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LolLootLootDescription>>(); 
  }
} 
#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LootLcdsLootDescriptionDTO { /**/ 
    std::map<std::string, std::string> localizationMap;/**/
    std::map<std::string, std::string> localizationLongDescriptionMap;/**/
    std::vector<std::string> childLootTableNames;/**/
    std::string lootName;/**/
  };
  static void to_json(json& j, const LootLcdsLootDescriptionDTO& v) { 
    j["localizationMap"] = v.localizationMap;
    j["localizationLongDescriptionMap"] = v.localizationLongDescriptionMap;
    j["childLootTableNames"] = v.childLootTableNames;
    j["lootName"] = v.lootName;
  }
  static void from_json(const json& j, LootLcdsLootDescriptionDTO& v) { 
    v.localizationMap = j.at("localizationMap").get<std::map<std::string, std::string>>(); 
    v.localizationLongDescriptionMap = j.at("localizationLongDescriptionMap").get<std::map<std::string, std::string>>(); 
    v.childLootTableNames = j.at("childLootTableNames").get<std::vector<std::string>>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
  }
} 
#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LootLcdsLootDescriptionDTO { 
    std::map<std::string, std::string> localizationMap;
    std::vector<std::string> childLootTableNames;
    std::map<std::string, std::string> localizationLongDescriptionMap;
    std::string lootName; 
  };
  inline void to_json(json& j, const LootLcdsLootDescriptionDTO& v) {
    j["localizationMap"] = v.localizationMap; 
    j["childLootTableNames"] = v.childLootTableNames; 
    j["localizationLongDescriptionMap"] = v.localizationLongDescriptionMap; 
    j["lootName"] = v.lootName; 
  }
  inline void from_json(const json& j, LootLcdsLootDescriptionDTO& v) {
    v.localizationMap = j.at("localizationMap").get<std::map<std::string, std::string>>(); 
    v.childLootTableNames = j.at("childLootTableNames").get<std::vector<std::string>>(); 
    v.localizationLongDescriptionMap = j.at("localizationLongDescriptionMap").get<std::map<std::string, std::string>>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
  }
}
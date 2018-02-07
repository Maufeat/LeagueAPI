#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootLootDescription { 
    std::string lootName;
    std::vector<std::string> childLootTableNames;
    std::map<std::string, std::string> localizationMap;
    std::map<std::string, std::string> localizationLongDescriptionMap; 
  };
  inline void to_json(json& j, const LolLootLootDescription& v) {
    j["lootName"] = v.lootName; 
    j["childLootTableNames"] = v.childLootTableNames; 
    j["localizationMap"] = v.localizationMap; 
    j["localizationLongDescriptionMap"] = v.localizationLongDescriptionMap; 
  }
  inline void from_json(const json& j, LolLootLootDescription& v) {
    v.lootName = j.at("lootName").get<std::string>(); 
    v.childLootTableNames = j.at("childLootTableNames").get<std::vector<std::string>>(); 
    v.localizationMap = j.at("localizationMap").get<std::map<std::string, std::string>>(); 
    v.localizationLongDescriptionMap = j.at("localizationLongDescriptionMap").get<std::map<std::string, std::string>>(); 
  }
}
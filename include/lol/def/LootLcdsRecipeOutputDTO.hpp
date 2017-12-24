#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LootLcdsRecipeOutputDTO { 
    bool allowDuplicates;
    std::string lootName;
    std::string quantityExpression;
    double probability; 
  };
  inline void to_json(json& j, const LootLcdsRecipeOutputDTO& v) {
    j["allowDuplicates"] = v.allowDuplicates; 
    j["lootName"] = v.lootName; 
    j["quantityExpression"] = v.quantityExpression; 
    j["probability"] = v.probability; 
  }
  inline void from_json(const json& j, LootLcdsRecipeOutputDTO& v) {
    v.allowDuplicates = j.at("allowDuplicates").get<bool>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.quantityExpression = j.at("quantityExpression").get<std::string>(); 
    v.probability = j.at("probability").get<double>(); 
  }
}
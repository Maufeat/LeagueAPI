#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LootLcdsRecipeOutputDTO { 
    std::string lootName;
    std::string quantityExpression;
    double probability;
    bool allowDuplicates; 
  };
  inline void to_json(json& j, const LootLcdsRecipeOutputDTO& v) {
    j["lootName"] = v.lootName; 
    j["quantityExpression"] = v.quantityExpression; 
    j["probability"] = v.probability; 
    j["allowDuplicates"] = v.allowDuplicates; 
  }
  inline void from_json(const json& j, LootLcdsRecipeOutputDTO& v) {
    v.lootName = j.at("lootName").get<std::string>(); 
    v.quantityExpression = j.at("quantityExpression").get<std::string>(); 
    v.probability = j.at("probability").get<double>(); 
    v.allowDuplicates = j.at("allowDuplicates").get<bool>(); 
  }
}
#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LootLcdsRecipeOutputDTO { 
    std::string quantityExpression;
    bool allowDuplicates;
    std::string lootName;
    double probability; 
  };
  void to_json(json& j, const LootLcdsRecipeOutputDTO& v) {
    j["quantityExpression"] = v.quantityExpression; 
    j["allowDuplicates"] = v.allowDuplicates; 
    j["lootName"] = v.lootName; 
    j["probability"] = v.probability; 
  }
  void from_json(const json& j, LootLcdsRecipeOutputDTO& v) {
    v.quantityExpression = j.at("quantityExpression").get<std::string>(); 
    v.allowDuplicates = j.at("allowDuplicates").get<bool>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.probability = j.at("probability").get<double>(); 
  }
}
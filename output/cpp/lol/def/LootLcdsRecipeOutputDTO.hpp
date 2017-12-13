#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LootLcdsRecipeOutputDTO { 
    std::string quantityExpression;
    double probability;
    bool allowDuplicates;
    std::string lootName; 
  };
  void to_json(json& j, const LootLcdsRecipeOutputDTO& v) {
  j["quantityExpression"] = v.quantityExpression; 
  j["probability"] = v.probability; 
  j["allowDuplicates"] = v.allowDuplicates; 
  j["lootName"] = v.lootName; 
  }
  void from_json(const json& j, LootLcdsRecipeOutputDTO& v) {
  v.quantityExpression = j.at("quantityExpression").get<std::string>(); 
  v.probability = j.at("probability").get<double>(); 
  v.allowDuplicates = j.at("allowDuplicates").get<bool>(); 
  v.lootName = j.at("lootName").get<std::string>(); 
  }
}
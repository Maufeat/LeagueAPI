#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LootLcdsRecipeSlotClientDTO { 
    std::string quantityExpression;
    int32_t slotNumber;
    std::string query; 
  };
  inline void to_json(json& j, const LootLcdsRecipeSlotClientDTO& v) {
    j["quantityExpression"] = v.quantityExpression; 
    j["slotNumber"] = v.slotNumber; 
    j["query"] = v.query; 
  }
  inline void from_json(const json& j, LootLcdsRecipeSlotClientDTO& v) {
    v.quantityExpression = j.at("quantityExpression").get<std::string>(); 
    v.slotNumber = j.at("slotNumber").get<int32_t>(); 
    v.query = j.at("query").get<std::string>(); 
  }
}
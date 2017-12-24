#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LootLcdsRecipeSlotClientDTO { 
    int32_t slotNumber;
    std::string query;
    std::string quantityExpression; 
  };
  inline void to_json(json& j, const LootLcdsRecipeSlotClientDTO& v) {
    j["slotNumber"] = v.slotNumber; 
    j["query"] = v.query; 
    j["quantityExpression"] = v.quantityExpression; 
  }
  inline void from_json(const json& j, LootLcdsRecipeSlotClientDTO& v) {
    v.slotNumber = j.at("slotNumber").get<int32_t>(); 
    v.query = j.at("query").get<std::string>(); 
    v.quantityExpression = j.at("quantityExpression").get<std::string>(); 
  }
}
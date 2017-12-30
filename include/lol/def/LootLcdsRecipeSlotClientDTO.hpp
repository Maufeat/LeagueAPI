#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LootLcdsRecipeSlotClientDTO { 
    std::string query;
    int32_t slotNumber;
    std::string quantityExpression; 
  };
  inline void to_json(json& j, const LootLcdsRecipeSlotClientDTO& v) {
    j["query"] = v.query; 
    j["slotNumber"] = v.slotNumber; 
    j["quantityExpression"] = v.quantityExpression; 
  }
  inline void from_json(const json& j, LootLcdsRecipeSlotClientDTO& v) {
    v.query = j.at("query").get<std::string>(); 
    v.slotNumber = j.at("slotNumber").get<int32_t>(); 
    v.quantityExpression = j.at("quantityExpression").get<std::string>(); 
  }
}
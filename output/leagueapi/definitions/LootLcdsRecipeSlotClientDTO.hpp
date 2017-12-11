#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LootLcdsRecipeSlotClientDTO { /**/ 
    std::string query;/**/
    std::string quantityExpression;/**/
    int32_t slotNumber;/**/
  };
  static void to_json(json& j, const LootLcdsRecipeSlotClientDTO& v) { 
    j["query"] = v.query;
    j["quantityExpression"] = v.quantityExpression;
    j["slotNumber"] = v.slotNumber;
  }
  static void from_json(const json& j, LootLcdsRecipeSlotClientDTO& v) { 
    v.query = j.at("query").get<std::string>(); 
    v.quantityExpression = j.at("quantityExpression").get<std::string>(); 
    v.slotNumber = j.at("slotNumber").get<int32_t>(); 
  }
} 
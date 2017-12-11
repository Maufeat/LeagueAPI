#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LootNameRefId.hpp>"

namespace leagueapi {
  struct CraftLootRefTransactionDTO { /**/ 
    int32_t repeat;/**/
    std::string recipeName;/**/
    std::vector<LootNameRefId> lootNameRefIds;/**/
  };
  static void to_json(json& j, const CraftLootRefTransactionDTO& v) { 
    j["repeat"] = v.repeat;
    j["recipeName"] = v.recipeName;
    j["lootNameRefIds"] = v.lootNameRefIds;
  }
  static void from_json(const json& j, CraftLootRefTransactionDTO& v) { 
    v.repeat = j.at("repeat").get<int32_t>(); 
    v.recipeName = j.at("recipeName").get<std::string>(); 
    v.lootNameRefIds = j.at("lootNameRefIds").get<std::vector<LootNameRefId>>(); 
  }
} 
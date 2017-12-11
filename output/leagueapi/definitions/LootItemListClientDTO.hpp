#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LootItemClientDTO.hpp>"

namespace leagueapi {
  struct LootItemListClientDTO { /**/ 
    int64_t lastUpdate;/**/
    std::vector<LootItemClientDTO> lootItems;/**/
  };
  static void to_json(json& j, const LootItemListClientDTO& v) { 
    j["lastUpdate"] = v.lastUpdate;
    j["lootItems"] = v.lootItems;
  }
  static void from_json(const json& j, LootItemListClientDTO& v) { 
    v.lastUpdate = j.at("lastUpdate").get<int64_t>(); 
    v.lootItems = j.at("lootItems").get<std::vector<LootItemClientDTO>>(); 
  }
} 
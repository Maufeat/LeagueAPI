#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLootPlayerLoot.hpp>"

namespace leagueapi {
  struct LolLootPlayerLootDelta { /**/ 
    int32_t deltaCount;/**/
    LolLootPlayerLoot playerLoot;/**/
  };
  static void to_json(json& j, const LolLootPlayerLootDelta& v) { 
    j["deltaCount"] = v.deltaCount;
    j["playerLoot"] = v.playerLoot;
  }
  static void from_json(const json& j, LolLootPlayerLootDelta& v) { 
    v.deltaCount = j.at("deltaCount").get<int32_t>(); 
    v.playerLoot = j.at("playerLoot").get<LolLootPlayerLoot>(); 
  }
} 
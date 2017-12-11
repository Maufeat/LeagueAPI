#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLootPlayerLoot.hpp>"

namespace leagueapi {
  struct LolLootPlayerLootMap { /**/ 
    std::map<std::string, LolLootPlayerLoot> playerLoot;/**/
    int64_t version;/**/
  };
  static void to_json(json& j, const LolLootPlayerLootMap& v) { 
    j["playerLoot"] = v.playerLoot;
    j["version"] = v.version;
  }
  static void from_json(const json& j, LolLootPlayerLootMap& v) { 
    v.playerLoot = j.at("playerLoot").get<std::map<std::string, LolLootPlayerLoot>>(); 
    v.version = j.at("version").get<int64_t>(); 
  }
} 
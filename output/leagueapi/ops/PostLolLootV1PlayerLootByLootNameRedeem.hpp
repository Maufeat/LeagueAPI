#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLootPlayerLootUpdate.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLootPlayerLootUpdate> PostLolLootV1PlayerLootByLootNameRedeem (const https::Info& _info_,
      const std::string& lootName /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-loot/v1/player-loot/"+to_string(lootName)+"/redeem?", { 
    }, { 
    },"") };
  }
} 
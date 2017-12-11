#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolPerksPlayerInventory.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolPerksPlayerInventory> GetLolPerksV1Inventory (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-perks/v1/inventory?", { 
    }, { 
    },"") };
  }
} 
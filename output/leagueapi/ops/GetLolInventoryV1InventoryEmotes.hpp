#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolInventoryInventoryItem.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolInventoryInventoryItem>> GetLolInventoryV1InventoryEmotes (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-inventory/v1/inventory/emotes?", { 
    }, { 
    },"") };
  }
} 
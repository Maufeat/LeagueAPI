#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolInventoryInventoryItem.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolInventoryInventoryItem>> GetLolInventoryV1Inventory (const https::Info& _info_,
      const std::vector<std::string>& inventoryTypes /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-inventory/v1/inventory?", { 
      { "inventoryTypes", https::to_string(inventoryTypes) },
    }, { 
    },"") };
  }
} 
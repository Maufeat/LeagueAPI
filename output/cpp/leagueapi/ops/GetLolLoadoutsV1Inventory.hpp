#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLoadoutsFrontendInventoryResponse.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLoadoutsFrontendInventoryResponse> GetLolLoadoutsV1Inventory (const https::Info& _info_,
      const std::vector<std::string>& inventoryTypes /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-loadouts/v1/inventory?", { 
      { "inventoryTypes", to_string(inventoryTypes) },
    }, { 
    }) };
  }
} 
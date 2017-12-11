#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::map<std::string, std::string>> GetLolInventoryV1SignedInventory (const https::Info& _info_,
      const std::vector<std::string>& inventoryTypes /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-inventory/v1/signedInventory?", { 
      { "inventoryTypes", https::to_string(inventoryTypes) },
    }, { 
    },"") };
  }
} 
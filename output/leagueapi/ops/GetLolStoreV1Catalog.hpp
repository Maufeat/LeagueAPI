#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolStoreCatalogItem.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolStoreCatalogItem>> GetLolStoreV1Catalog (const https::Info& _info_ ,
      const std::optional<std::vector<std::string>>& inventoryType = std::nullopt /**/,
      const std::optional<std::vector<int32_t>>& itemId = std::nullopt /**/)
  { 
    return { https::Do(_info_, "get", "/lol-store/v1/catalog?", { 
      { "inventoryType", https::to_string(inventoryType) },
      { "itemId", https::to_string(itemId) },
    }, { 
    },"") };
  }
} 
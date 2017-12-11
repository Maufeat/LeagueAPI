#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsChestEligibility.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolCollectionsCollectionsChestEligibility> GetLolCollectionsV1InventoriesChestEligibility (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-collections/v1/inventories/chest-eligibility?", { 
    }, { 
    },"") };
  }
} 
#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolItemSetsItemSets.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PutLolItemSetsV1ItemSetsBySummonerIdSets (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const LolItemSetsItemSets& itemSets /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?", { 
    }, { 
    },itemSets) };
  }
} 
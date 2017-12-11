#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolItemSetsItemSet.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolItemSetsV1ItemSetsBySummonerIdSets (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const LolItemSetsItemSet& itemSet /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?", { 
    }, { 
    },itemSet) };
  }
} 
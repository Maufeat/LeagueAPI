#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolItemSetsItemSets.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolItemSetsItemSets> GetLolItemSetsV1ItemSetsBySummonerIdSets (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?", { 
    }, { 
    },"") };
  }
} 
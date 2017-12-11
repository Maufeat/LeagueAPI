#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsSummonerIcon.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolCollectionsCollectionsSummonerIcon> GetLolCollectionsV2InventoriesBySummonerIdSummonerIconsBySummonerIconId (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const int32_t& summonerIconId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-collections/v2/inventories/"+to_string(summonerId)+"/summoner-icons/"+to_string(summonerIconId)+"?", { 
    }, { 
    },"") };
  }
} 
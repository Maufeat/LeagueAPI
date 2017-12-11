#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampionsCollectionsChampionSkin.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampionsCollectionsChampionSkin> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsByChampionSkinId (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const int32_t& championId /**/,
      const int32_t& championSkinId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"/skins/"+to_string(championSkinId)+"?", { 
    }, { 
    }) };
  }
} 
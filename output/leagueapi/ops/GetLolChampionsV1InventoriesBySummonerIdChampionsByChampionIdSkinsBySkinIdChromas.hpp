#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampionsCollectionsChampionChroma.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolChampionsCollectionsChampionChroma>> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsBySkinIdChromas (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const int32_t& championId /**/,
      const int32_t& skinId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"/skins/"+to_string(skinId)+"/chromas?", { 
    }, { 
    },"") };
  }
} 
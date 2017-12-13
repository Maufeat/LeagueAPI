#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampionsCollectionsChampionSkin.hpp>
namespace lol {
  Result<LolChampionsCollectionsChampionSkin> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsByChampionSkinId(const LeagueClient& _client, const uint64_t& summonerId, const int32_t& championId, const int32_t& championSkinId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"/skins/"+to_string(championSkinId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampionsCollectionsChampion.hpp>
namespace lol {
  Result<LolChampionsCollectionsChampion> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionId(const LeagueClient& _client, const uint64_t& summonerId, const int32_t& championId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
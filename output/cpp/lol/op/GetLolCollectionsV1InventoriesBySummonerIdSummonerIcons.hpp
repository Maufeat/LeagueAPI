#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolCollectionsCollectionsSummonerIcons.hpp>
namespace lol {
  Result<LolCollectionsCollectionsSummonerIcons> GetLolCollectionsV1InventoriesBySummonerIdSummonerIcons(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/summoner-icons?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
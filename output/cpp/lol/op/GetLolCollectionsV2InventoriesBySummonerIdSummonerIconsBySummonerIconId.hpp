#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolCollectionsCollectionsSummonerIcon.hpp>
namespace lol {
  Result<LolCollectionsCollectionsSummonerIcon> GetLolCollectionsV2InventoriesBySummonerIdSummonerIconsBySummonerIconId(const LeagueClient& _client, const uint64_t& summonerId, const int32_t& summonerIconId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-collections/v2/inventories/"+to_string(summonerId)+"/summoner-icons/"+to_string(summonerIconId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolCollectionsCollectionsMasteryBook.hpp>
namespace lol {
  Result<LolCollectionsCollectionsMasteryBook> GetLolCollectionsV1InventoriesBySummonerIdMasteryBook(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
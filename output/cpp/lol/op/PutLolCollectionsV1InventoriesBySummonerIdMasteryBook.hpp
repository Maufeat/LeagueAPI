#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolCollectionsCollectionsMasteryBook.hpp>
namespace lol {
  Result<LolCollectionsCollectionsMasteryBook> PutLolCollectionsV1InventoriesBySummonerIdMasteryBook(const LeagueClient& _client, const uint64_t& summonerId, const LolCollectionsCollectionsMasteryBook& resource)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(resource).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
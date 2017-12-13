#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolCollectionsCollectionsRuneBook.hpp>
namespace lol {
  Result<LolCollectionsCollectionsRuneBook> PutLolCollectionsV1InventoriesBySummonerIdRuneBook(const LeagueClient& _client, const uint64_t& summonerId, const LolCollectionsCollectionsRuneBook& resource)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(resource).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
#pragma once
#include "../base_op.hpp" 
#include "../def/LolCollectionsCollectionsMasteryBook.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsMasteryBook> PutLolCollectionsV1InventoriesBySummonerIdMasteryBook(const LeagueClient& _client, const uint64_t& summonerId, const LolCollectionsCollectionsMasteryBook& resource)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolCollectionsCollectionsMasteryBook> {
        _client_.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(resource).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsMasteryBook> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
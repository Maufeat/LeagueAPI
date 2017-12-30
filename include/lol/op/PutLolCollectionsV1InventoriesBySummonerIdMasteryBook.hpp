#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsMasteryBook.hpp"
namespace lol {
  template<typename T>
  inline Result<LolCollectionsCollectionsMasteryBook> PutLolCollectionsV1InventoriesBySummonerIdMasteryBook(T& _client, const uint64_t& summonerId, const LolCollectionsCollectionsMasteryBook& resource)
  {
    try {
      return ToResult<LolCollectionsCollectionsMasteryBook>(_client.https.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(resource).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolCollectionsCollectionsMasteryBook>(e.code());
    }
  }
  template<typename T>
  inline void PutLolCollectionsV1InventoriesBySummonerIdMasteryBook(T& _client, const uint64_t& summonerId, const LolCollectionsCollectionsMasteryBook& resource, std::function<void(T&, const Result<LolCollectionsCollectionsMasteryBook>&)> cb)
  {
    _client.httpsa.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(resource).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolCollectionsCollectionsMasteryBook>(e));
            else
              cb(_client, ToResult<LolCollectionsCollectionsMasteryBook>(response));
        });
  }
}
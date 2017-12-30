#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsMasteryPage.hpp"
namespace lol {
  template<typename T>
  inline Result<LolCollectionsCollectionsMasteryPage> PutLolCollectionsV1InventoriesBySummonerIdMasteryBookPages(T& _client, const uint64_t& summonerId, const LolCollectionsCollectionsMasteryPage& resource)
  {
    try {
      return ToResult<LolCollectionsCollectionsMasteryPage>(_client.https.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book/pages?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(resource).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolCollectionsCollectionsMasteryPage>(e.code());
    }
  }
  template<typename T>
  inline void PutLolCollectionsV1InventoriesBySummonerIdMasteryBookPages(T& _client, const uint64_t& summonerId, const LolCollectionsCollectionsMasteryPage& resource, std::function<void(T&, const Result<LolCollectionsCollectionsMasteryPage>&)> cb)
  {
    _client.httpsa.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book/pages?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(resource).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolCollectionsCollectionsMasteryPage>(e));
            else
              cb(_client, ToResult<LolCollectionsCollectionsMasteryPage>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsRuneBook.hpp"
namespace lol {
  template<typename T>
  inline Result<LolCollectionsCollectionsRuneBook> PutLolCollectionsV1InventoriesBySummonerIdRuneBook(T& _client, const uint64_t& summonerId, const LolCollectionsCollectionsRuneBook& resource)
  {
    try {
      return ToResult<LolCollectionsCollectionsRuneBook>(_client.https.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(resource).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolCollectionsCollectionsRuneBook>(e.code());
    }
  }
  template<typename T>
  inline void PutLolCollectionsV1InventoriesBySummonerIdRuneBook(T& _client, const uint64_t& summonerId, const LolCollectionsCollectionsRuneBook& resource, std::function<void(T&, const Result<LolCollectionsCollectionsRuneBook>&)> cb)
  {
    _client.httpsa.request("put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(resource).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolCollectionsCollectionsRuneBook>(e));
            else
              cb(_client, ToResult<LolCollectionsCollectionsRuneBook>(response));
        });
  }
}
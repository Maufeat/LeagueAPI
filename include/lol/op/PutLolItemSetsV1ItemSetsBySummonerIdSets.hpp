#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolItemSetsItemSets.hpp"
namespace lol {
  template<typename T>
  inline Result<Nothing> PutLolItemSetsV1ItemSetsBySummonerIdSets(T& _client, const uint64_t& summonerId, const LolItemSetsItemSets& itemSets)
  {
    try {
      return ToResult<Nothing>(_client.https.request("put", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(itemSets).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PutLolItemSetsV1ItemSetsBySummonerIdSets(T& _client, const uint64_t& summonerId, const LolItemSetsItemSets& itemSets, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("put", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(itemSets).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolItemSetsItemSet.hpp"
namespace lol {
  template<typename T>
  inline Result<Nothing> PostLolItemSetsV1ItemSetsBySummonerIdSets(T& _client, const uint64_t& summonerId, const LolItemSetsItemSet& itemSet)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(itemSet).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostLolItemSetsV1ItemSetsBySummonerIdSets(T& _client, const uint64_t& summonerId, const LolItemSetsItemSet& itemSet, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(itemSet).dump(),
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
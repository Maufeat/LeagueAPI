#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolItemSetsItemSets.hpp"
namespace lol {
  inline Result<std::nullptr_t> PutLolItemSetsV1ItemSetsBySummonerIdSets(LeagueClient& _client, const uint64_t& summonerId, const LolItemSetsItemSets& itemSets)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("put", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(itemSets).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PutLolItemSetsV1ItemSetsBySummonerIdSets(LeagueClient& _client, const uint64_t& summonerId, const LolItemSetsItemSets& itemSets, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("put", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(itemSets).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}
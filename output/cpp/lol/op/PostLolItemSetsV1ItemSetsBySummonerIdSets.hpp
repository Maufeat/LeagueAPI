#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolItemSetsItemSet.hpp"
namespace lol {
  inline Result<void> PostLolItemSetsV1ItemSetsBySummonerIdSets(LeagueClient& _client, const uint64_t& summonerId, const LolItemSetsItemSet& itemSet)
  {
    try {
      return Result<void> {
        _client.https.request("post", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(itemSet).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolItemSetsV1ItemSetsBySummonerIdSets(LeagueClient& _client, const uint64_t& summonerId, const LolItemSetsItemSet& itemSet, std::function<void(LeagueClient&,const Result<void>&)> cb)
  {
    _client.httpsa.request("post", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(itemSet).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<void> { response });
          else
            cb(_client,Result<void> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
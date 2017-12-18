#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolItemSetsItemSets.hpp"
namespace lol {
  inline Result<LolItemSetsItemSets> GetLolItemSetsV1ItemSetsBySummonerIdSets(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return Result<LolItemSetsItemSets> {
        _client.https.request("get", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolItemSetsItemSets> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolItemSetsV1ItemSetsBySummonerIdSets(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&,const Result<LolItemSetsItemSets>&)> cb)
  {
    _client.httpsa.request("get", "/lol-item-sets/v1/item-sets/"+to_string(summonerId)+"/sets?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolItemSetsItemSets> { response });
          else
            cb(_client,Result<LolItemSetsItemSets> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
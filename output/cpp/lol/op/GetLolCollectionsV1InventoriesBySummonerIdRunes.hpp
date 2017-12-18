#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsRuneQuantities.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsRuneQuantities> GetLolCollectionsV1InventoriesBySummonerIdRunes(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return Result<LolCollectionsCollectionsRuneQuantities> {
        _client.https.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/runes?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsRuneQuantities> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolCollectionsV1InventoriesBySummonerIdRunes(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&,const Result<LolCollectionsCollectionsRuneQuantities>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/runes?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolCollectionsCollectionsRuneQuantities> { response });
          else
            cb(_client,Result<LolCollectionsCollectionsRuneQuantities> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
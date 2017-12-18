#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsMasteryBook.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsMasteryBook> GetLolCollectionsV1InventoriesBySummonerIdMasteryBook(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return Result<LolCollectionsCollectionsMasteryBook> {
        _client.https.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsMasteryBook> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolCollectionsV1InventoriesBySummonerIdMasteryBook(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&,const Result<LolCollectionsCollectionsMasteryBook>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolCollectionsCollectionsMasteryBook> { response });
          else
            cb(_client,Result<LolCollectionsCollectionsMasteryBook> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
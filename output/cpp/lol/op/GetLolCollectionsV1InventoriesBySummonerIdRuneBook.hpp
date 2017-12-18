#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsRuneBook.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsRuneBook> GetLolCollectionsV1InventoriesBySummonerIdRuneBook(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return Result<LolCollectionsCollectionsRuneBook> {
        _client.https.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolCollectionsCollectionsRuneBook> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolCollectionsV1InventoriesBySummonerIdRuneBook(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&,const Result<LolCollectionsCollectionsRuneBook>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolCollectionsCollectionsRuneBook> { response });
          else
            cb(_client,Result<LolCollectionsCollectionsRuneBook> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
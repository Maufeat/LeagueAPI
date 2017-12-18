#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsRuneBook.hpp"
namespace lol {
  inline Result<LolCollectionsCollectionsRuneBook> GetLolCollectionsV1InventoriesBySummonerIdRuneBook(LeagueClient& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<LolCollectionsCollectionsRuneBook>(_client.https.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolCollectionsCollectionsRuneBook>(e.code());
    }
  }
  inline void GetLolCollectionsV1InventoriesBySummonerIdRuneBook(LeagueClient& _client, const uint64_t& summonerId, std::function<void(LeagueClient&, const Result<LolCollectionsCollectionsRuneBook>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolCollectionsCollectionsRuneBook>(e));
            else
              cb(_client, ToResult<LolCollectionsCollectionsRuneBook>(response));
        });
  }
}
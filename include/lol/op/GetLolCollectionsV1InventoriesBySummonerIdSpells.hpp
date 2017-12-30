#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsSummonerSpells.hpp"
namespace lol {
  template<typename T>
  inline Result<LolCollectionsCollectionsSummonerSpells> GetLolCollectionsV1InventoriesBySummonerIdSpells(T& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<LolCollectionsCollectionsSummonerSpells>(_client.https.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/spells?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolCollectionsCollectionsSummonerSpells>(e.code());
    }
  }
  template<typename T>
  inline void GetLolCollectionsV1InventoriesBySummonerIdSpells(T& _client, const uint64_t& summonerId, std::function<void(T&, const Result<LolCollectionsCollectionsSummonerSpells>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/spells?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolCollectionsCollectionsSummonerSpells>(e));
            else
              cb(_client, ToResult<LolCollectionsCollectionsSummonerSpells>(response));
        });
  }
}
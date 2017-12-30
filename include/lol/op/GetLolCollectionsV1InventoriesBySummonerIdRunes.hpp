#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolCollectionsCollectionsRuneQuantities.hpp"
namespace lol {
  template<typename T>
  inline Result<LolCollectionsCollectionsRuneQuantities> GetLolCollectionsV1InventoriesBySummonerIdRunes(T& _client, const uint64_t& summonerId)
  {
    try {
      return ToResult<LolCollectionsCollectionsRuneQuantities>(_client.https.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/runes?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolCollectionsCollectionsRuneQuantities>(e.code());
    }
  }
  template<typename T>
  inline void GetLolCollectionsV1InventoriesBySummonerIdRunes(T& _client, const uint64_t& summonerId, std::function<void(T&, const Result<LolCollectionsCollectionsRuneQuantities>&)> cb)
  {
    _client.httpsa.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/runes?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolCollectionsCollectionsRuneQuantities>(e));
            else
              cb(_client, ToResult<LolCollectionsCollectionsRuneQuantities>(response));
        });
  }
}
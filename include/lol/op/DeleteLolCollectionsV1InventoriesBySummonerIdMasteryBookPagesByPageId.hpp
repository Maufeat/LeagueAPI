#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<json> DeleteLolCollectionsV1InventoriesBySummonerIdMasteryBookPagesByPageId(T& _client, const uint64_t& summonerId, const uint32_t& pageId)
  {
    try {
      return ToResult<json>(_client.https.request("delete", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book/pages/"+to_string(pageId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void DeleteLolCollectionsV1InventoriesBySummonerIdMasteryBookPagesByPageId(T& _client, const uint64_t& summonerId, const uint32_t& pageId, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book/pages/"+to_string(pageId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}
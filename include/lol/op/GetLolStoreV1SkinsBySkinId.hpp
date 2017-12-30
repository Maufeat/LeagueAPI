#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolStoreCatalogItem.hpp"
namespace lol {
  template<typename T>
  inline Result<LolStoreCatalogItem> GetLolStoreV1SkinsBySkinId(T& _client, const int32_t& skinId)
  {
    try {
      return ToResult<LolStoreCatalogItem>(_client.https.request("get", "/lol-store/v1/skins/"+to_string(skinId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolStoreCatalogItem>(e.code());
    }
  }
  template<typename T>
  inline void GetLolStoreV1SkinsBySkinId(T& _client, const int32_t& skinId, std::function<void(T&, const Result<LolStoreCatalogItem>&)> cb)
  {
    _client.httpsa.request("get", "/lol-store/v1/skins/"+to_string(skinId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolStoreCatalogItem>(e));
            else
              cb(_client, ToResult<LolStoreCatalogItem>(response));
        });
  }
}
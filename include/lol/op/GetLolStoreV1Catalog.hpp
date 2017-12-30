#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolStoreCatalogItem.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolStoreCatalogItem>> GetLolStoreV1Catalog(T& _client, const std::optional<std::vector<std::string>>& inventoryType = std::nullopt, const std::optional<std::vector<int32_t>>& itemId = std::nullopt)
  {
    try {
      return ToResult<std::vector<LolStoreCatalogItem>>(_client.https.request("get", "/lol-store/v1/catalog?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "inventoryType", to_string(inventoryType) },
          { "itemId", to_string(itemId) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolStoreCatalogItem>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolStoreV1Catalog(T& _client, const std::optional<std::vector<std::string>>& inventoryType = std::nullopt, const std::optional<std::vector<int32_t>>& itemId = std::nullopt, std::function<void(T&, const Result<std::vector<LolStoreCatalogItem>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-store/v1/catalog?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "inventoryType", to_string(inventoryType) },
          { "itemId", to_string(itemId) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolStoreCatalogItem>>(e));
            else
              cb(_client, ToResult<std::vector<LolStoreCatalogItem>>(response));
        });
  }
}
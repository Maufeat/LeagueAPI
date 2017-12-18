#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolStoreCatalogItem.hpp"
namespace lol {
  inline Result<std::vector<LolStoreCatalogItem>> GetLolStoreV1Catalog(LeagueClient& _client, const std::optional<std::vector<std::string>>& inventoryType = std::nullopt, const std::optional<std::vector<int32_t>>& itemId = std::nullopt)
  {
    try {
      return Result<std::vector<LolStoreCatalogItem>> {
        _client.https.request("get", "/lol-store/v1/catalog?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "inventoryType", to_string(inventoryType) },
           { "itemId", to_string(itemId) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolStoreCatalogItem>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolStoreV1Catalog(LeagueClient& _client, const std::optional<std::vector<std::string>>& inventoryType = std::nullopt, const std::optional<std::vector<int32_t>>& itemId = std::nullopt, std::function<void(LeagueClient&,const Result<std::vector<LolStoreCatalogItem>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-store/v1/catalog?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
           { "inventoryType", to_string(inventoryType) },
           { "itemId", to_string(itemId) }, })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolStoreCatalogItem>> { response });
          else
            cb(_client,Result<std::vector<LolStoreCatalogItem>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
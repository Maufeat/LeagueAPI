#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLoadoutsFrontendInventoryResponse.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLoadoutsFrontendInventoryResponse> GetLolLoadoutsV1Inventory(T& _client, const std::vector<std::string>& inventoryTypes)
  {
    try {
      return ToResult<LolLoadoutsFrontendInventoryResponse>(_client.https.request("get", "/lol-loadouts/v1/inventory?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "inventoryTypes", to_string(inventoryTypes) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLoadoutsFrontendInventoryResponse>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLoadoutsV1Inventory(T& _client, const std::vector<std::string>& inventoryTypes, std::function<void(T&, const Result<LolLoadoutsFrontendInventoryResponse>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loadouts/v1/inventory?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "inventoryTypes", to_string(inventoryTypes) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLoadoutsFrontendInventoryResponse>(e));
            else
              cb(_client, ToResult<LolLoadoutsFrontendInventoryResponse>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<json> DeleteLolLoadoutsV2ItemsById(T& _client, const uint32_t& id, const std::string& inventoryType)
  {
    try {
      return ToResult<json>(_client.https.request("delete", "/lol-loadouts/v2/items/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "inventoryType", to_string(inventoryType) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void DeleteLolLoadoutsV2ItemsById(T& _client, const uint32_t& id, const std::string& inventoryType, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-loadouts/v2/items/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "inventoryType", to_string(inventoryType) }, })), 
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
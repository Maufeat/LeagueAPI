#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PatcherInjectedPatcherError.hpp"
namespace lol {
  template<typename T>
  inline Result<Nothing> PostPatcherV1ProductsByProductIdInjectError(T& _client, const std::string& product_id, const std::string& component_id, const PatcherInjectedPatcherError& error)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/patcher/v1/products/"+to_string(product_id)+"/inject-error?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "component-id", to_string(component_id) },
          { "error", to_string(error) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostPatcherV1ProductsByProductIdInjectError(T& _client, const std::string& product_id, const std::string& component_id, const PatcherInjectedPatcherError& error, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/patcher/v1/products/"+to_string(product_id)+"/inject-error?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "component-id", to_string(component_id) },
          { "error", to_string(error) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}
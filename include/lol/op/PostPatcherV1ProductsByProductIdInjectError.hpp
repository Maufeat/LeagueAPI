#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PatcherInjectedPatcherError.hpp"
namespace lol {
  inline Result<std::nullptr_t> PostPatcherV1ProductsByProductIdInjectError(LeagueClient& _client, const std::string& product_id, const std::string& component_id, const PatcherInjectedPatcherError& error)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/patcher/v1/products/"+to_string(product_id)+"/inject-error?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "component-id", to_string(component_id) },
          { "error", to_string(error) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostPatcherV1ProductsByProductIdInjectError(LeagueClient& _client, const std::string& product_id, const std::string& component_id, const PatcherInjectedPatcherError& error, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/patcher/v1/products/"+to_string(product_id)+"/inject-error?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "component-id", to_string(component_id) },
          { "error", to_string(error) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}
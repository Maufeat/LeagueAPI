#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PatcherInjectedPatcherError.hpp>
namespace lol {
  inline Result<void> PostPatcherV1ProductsByProductIdInjectError(const LeagueClient& _client, const std::string& product_id, const std::string& component_id, const PatcherInjectedPatcherError& error)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/patcher/v1/products/"+to_string(product_id)+"/inject-error?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "component-id", to_string(component_id) },
           { "error", to_string(error) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
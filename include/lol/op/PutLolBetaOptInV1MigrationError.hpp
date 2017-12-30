#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> PutLolBetaOptInV1MigrationError(T& _client, const std::string& errString)
  {
    try {
      return ToResult<Nothing>(_client.https.request("put", "/lol-beta-opt-in/v1/migration-error?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "errString", to_string(errString) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PutLolBetaOptInV1MigrationError(T& _client, const std::string& errString, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("put", "/lol-beta-opt-in/v1/migration-error?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "errString", to_string(errString) }, })), 
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
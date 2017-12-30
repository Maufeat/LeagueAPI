#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<json> PutPatcherV1SelfUpdateRestart(T& _client, const bool& forceRestartOnSelfUpdate)
  {
    try {
      return ToResult<json>(_client.https.request("put", "/patcher/v1/self-update-restart?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "forceRestartOnSelfUpdate", to_string(forceRestartOnSelfUpdate) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PutPatcherV1SelfUpdateRestart(T& _client, const bool& forceRestartOnSelfUpdate, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("put", "/patcher/v1/self-update-restart?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "forceRestartOnSelfUpdate", to_string(forceRestartOnSelfUpdate) }, })), 
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
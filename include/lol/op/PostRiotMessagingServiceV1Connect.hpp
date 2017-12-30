#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> PostRiotMessagingServiceV1Connect(T& _client, const std::string& idToken)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/riot-messaging-service/v1/connect?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(idToken).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostRiotMessagingServiceV1Connect(T& _client, const std::string& idToken, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/riot-messaging-service/v1/connect?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(idToken).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}
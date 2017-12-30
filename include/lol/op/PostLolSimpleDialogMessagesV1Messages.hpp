#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSimpleDialogMessagesLocalMessageRequest.hpp"
namespace lol {
  template<typename T>
  inline Result<json> PostLolSimpleDialogMessagesV1Messages(T& _client, const LolSimpleDialogMessagesLocalMessageRequest& messageRequest)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-simple-dialog-messages/v1/messages?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(messageRequest).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PostLolSimpleDialogMessagesV1Messages(T& _client, const LolSimpleDialogMessagesLocalMessageRequest& messageRequest, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-simple-dialog-messages/v1/messages?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(messageRequest).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}
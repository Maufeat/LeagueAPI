#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolSimpleDialogMessagesMessage.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolSimpleDialogMessagesMessage>> GetLolSimpleDialogMessagesV1Messages(T& _client)
  {
    try {
      return ToResult<std::vector<LolSimpleDialogMessagesMessage>>(_client.https.request("get", "/lol-simple-dialog-messages/v1/messages?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolSimpleDialogMessagesMessage>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolSimpleDialogMessagesV1Messages(T& _client, std::function<void(T&, const Result<std::vector<LolSimpleDialogMessagesMessage>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-simple-dialog-messages/v1/messages?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolSimpleDialogMessagesMessage>>(e));
            else
              cb(_client, ToResult<std::vector<LolSimpleDialogMessagesMessage>>(response));
        });
  }
}
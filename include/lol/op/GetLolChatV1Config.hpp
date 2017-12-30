#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatChatServiceDynamicClientConfig.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChatChatServiceDynamicClientConfig> GetLolChatV1Config(T& _client)
  {
    try {
      return ToResult<LolChatChatServiceDynamicClientConfig>(_client.https.request("get", "/lol-chat/v1/config?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatChatServiceDynamicClientConfig>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChatV1Config(T& _client, std::function<void(T&, const Result<LolChatChatServiceDynamicClientConfig>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/config?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatChatServiceDynamicClientConfig>(e));
            else
              cb(_client, ToResult<LolChatChatServiceDynamicClientConfig>(response));
        });
  }
}
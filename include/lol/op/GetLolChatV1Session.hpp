#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatSessionResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChatSessionResource> GetLolChatV1Session(T& _client)
  {
    try {
      return ToResult<LolChatSessionResource>(_client.https.request("get", "/lol-chat/v1/session?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatSessionResource>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChatV1Session(T& _client, std::function<void(T&, const Result<LolChatSessionResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/session?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatSessionResource>(e));
            else
              cb(_client, ToResult<LolChatSessionResource>(response));
        });
  }
}
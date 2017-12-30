#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatUserResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChatUserResource> GetLolChatV1Me(T& _client)
  {
    try {
      return ToResult<LolChatUserResource>(_client.https.request("get", "/lol-chat/v1/me?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatUserResource>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChatV1Me(T& _client, std::function<void(T&, const Result<LolChatUserResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/me?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatUserResource>(e));
            else
              cb(_client, ToResult<LolChatUserResource>(response));
        });
  }
}
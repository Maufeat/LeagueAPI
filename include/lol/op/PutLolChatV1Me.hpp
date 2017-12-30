#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatUserResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChatUserResource> PutLolChatV1Me(T& _client, const LolChatUserResource& me)
  {
    try {
      return ToResult<LolChatUserResource>(_client.https.request("put", "/lol-chat/v1/me?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(me).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatUserResource>(e.code());
    }
  }
  template<typename T>
  inline void PutLolChatV1Me(T& _client, const LolChatUserResource& me, std::function<void(T&, const Result<LolChatUserResource>&)> cb)
  {
    _client.httpsa.request("put", "/lol-chat/v1/me?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(me).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatUserResource>(e));
            else
              cb(_client, ToResult<LolChatUserResource>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatConversationResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChatConversationResource> PostLolChatV1Conversations(T& _client, const LolChatConversationResource& conversation)
  {
    try {
      return ToResult<LolChatConversationResource>(_client.https.request("post", "/lol-chat/v1/conversations?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(conversation).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatConversationResource>(e.code());
    }
  }
  template<typename T>
  inline void PostLolChatV1Conversations(T& _client, const LolChatConversationResource& conversation, std::function<void(T&, const Result<LolChatConversationResource>&)> cb)
  {
    _client.httpsa.request("post", "/lol-chat/v1/conversations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(conversation).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatConversationResource>(e));
            else
              cb(_client, ToResult<LolChatConversationResource>(response));
        });
  }
}
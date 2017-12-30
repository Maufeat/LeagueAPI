#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatConversationResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChatConversationResource> GetLolChatV1ConversationsById(T& _client, const std::string& id)
  {
    try {
      return ToResult<LolChatConversationResource>(_client.https.request("get", "/lol-chat/v1/conversations/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatConversationResource>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChatV1ConversationsById(T& _client, const std::string& id, std::function<void(T&, const Result<LolChatConversationResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/conversations/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatConversationResource>(e));
            else
              cb(_client, ToResult<LolChatConversationResource>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatActiveConversationResource.hpp"
namespace lol {
  inline Result<LolChatActiveConversationResource> GetLolChatV1ConversationsActive(LeagueClient& _client)
  {
    try {
      return ToResult<LolChatActiveConversationResource>(_client.https.request("get", "/lol-chat/v1/conversations/active?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatActiveConversationResource>(e.code());
    }
  }
  inline void GetLolChatV1ConversationsActive(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolChatActiveConversationResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/conversations/active?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatActiveConversationResource>(e));
            else
              cb(_client, ToResult<LolChatActiveConversationResource>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatConversationMessageResource.hpp"
namespace lol {
  inline Result<LolChatConversationMessageResource> PostLolChatV1ConversationsByIdMessages(LeagueClient& _client, const std::string& id, const LolChatConversationMessageResource& body)
  {
    try {
      return ToResult<LolChatConversationMessageResource>(_client.https.request("post", "/lol-chat/v1/conversations/"+to_string(id)+"/messages?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(body).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatConversationMessageResource>(e.code());
    }
  }
  inline void PostLolChatV1ConversationsByIdMessages(LeagueClient& _client, const std::string& id, const LolChatConversationMessageResource& body, std::function<void(LeagueClient&, const Result<LolChatConversationMessageResource>&)> cb)
  {
    _client.httpsa.request("post", "/lol-chat/v1/conversations/"+to_string(id)+"/messages?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(body).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatConversationMessageResource>(e));
            else
              cb(_client, ToResult<LolChatConversationMessageResource>(response));
        });
  }
}
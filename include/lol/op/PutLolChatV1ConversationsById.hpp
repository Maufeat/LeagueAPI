#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatConversationResource.hpp"
namespace lol {
  inline Result<LolChatConversationResource> PutLolChatV1ConversationsById(LeagueClient& _client, const std::string& id, const LolChatConversationResource& updatedConversation)
  {
    try {
      return ToResult<LolChatConversationResource>(_client.https.request("put", "/lol-chat/v1/conversations/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(updatedConversation).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatConversationResource>(e.code());
    }
  }
  inline void PutLolChatV1ConversationsById(LeagueClient& _client, const std::string& id, const LolChatConversationResource& updatedConversation, std::function<void(LeagueClient&, const Result<LolChatConversationResource>&)> cb)
  {
    _client.httpsa.request("put", "/lol-chat/v1/conversations/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(updatedConversation).dump(),
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
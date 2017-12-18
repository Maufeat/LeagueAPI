#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatConversationResource.hpp>
namespace lol {
  inline Result<LolChatConversationResource> PutLolChatV1ConversationsById(const LeagueClient& _client, const std::string& id, const LolChatConversationResource& updatedConversation)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChatConversationResource> {
        _client_.request("put", "/lol-chat/v1/conversations/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(updatedConversation).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatConversationResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
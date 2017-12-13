#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatConversationResource.hpp>
namespace lol {
  Result<LolChatConversationResource> PutLolChatV1ConversationsById(const LeagueClient& _client, const std::string& id, const LolChatConversationResource& updatedConversation)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-chat/v1/conversations/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(updatedConversation).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
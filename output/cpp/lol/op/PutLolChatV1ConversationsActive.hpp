#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatActiveConversationResource.hpp>
namespace lol {
  Result<json> PutLolChatV1ConversationsActive(const LeagueClient& _client, const LolChatActiveConversationResource& activeConversation)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-chat/v1/conversations/active?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(activeConversation).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
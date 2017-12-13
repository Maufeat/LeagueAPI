#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatConversationResource.hpp>
namespace lol {
  Result<LolChatConversationResource> PostLolChatV1Conversations(const LeagueClient& _client, const LolChatConversationResource& conversation)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-chat/v1/conversations?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(conversation).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
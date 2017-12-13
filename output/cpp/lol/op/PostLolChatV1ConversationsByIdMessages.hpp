#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatConversationMessageResource.hpp>
namespace lol {
  Result<LolChatConversationMessageResource> PostLolChatV1ConversationsByIdMessages(const LeagueClient& _client, const std::string& id, const LolChatConversationMessageResource& body)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-chat/v1/conversations/"+to_string(id)+"/messages?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(body).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
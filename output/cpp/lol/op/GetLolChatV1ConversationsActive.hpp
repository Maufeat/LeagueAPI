#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatActiveConversationResource.hpp>
namespace lol {
  Result<LolChatActiveConversationResource> GetLolChatV1ConversationsActive(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-chat/v1/conversations/active?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
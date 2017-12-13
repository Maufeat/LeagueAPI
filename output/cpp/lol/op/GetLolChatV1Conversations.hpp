#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatConversationResource.hpp>
namespace lol {
  Result<std::vector<LolChatConversationResource>> GetLolChatV1Conversations(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-chat/v1/conversations?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
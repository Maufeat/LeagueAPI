#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatActiveConversationResource.hpp>
namespace lol {
  Result<json> PutLolChatV1ConversationsActive(const LeagueClient& _client, const LolChatActiveConversationResource& activeConversation)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/lol-chat/v1/conversations/active?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(activeConversation).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
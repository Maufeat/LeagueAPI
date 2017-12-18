#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatActiveConversationResource.hpp>
namespace lol {
  inline Result<LolChatActiveConversationResource> GetLolChatV1ConversationsActive(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChatActiveConversationResource> {
        _client_.request("get", "/lol-chat/v1/conversations/active?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatActiveConversationResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
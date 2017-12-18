#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatConversationResource.hpp>
namespace lol {
  inline Result<LolChatConversationResource> PostLolChatV1Conversations(const LeagueClient& _client, const LolChatConversationResource& conversation)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChatConversationResource> {
        _client_.request("post", "/lol-chat/v1/conversations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(conversation).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatConversationResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatConversationMessageResource.hpp>
namespace lol {
  Result<LolChatConversationMessageResource> PostLolChatV1ConversationsByIdMessages(const LeagueClient& _client, const std::string& id, const LolChatConversationMessageResource& body)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChatConversationMessageResource> {
        _client_.request("post", "/lol-chat/v1/conversations/"+to_string(id)+"/messages?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(body).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatConversationMessageResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}
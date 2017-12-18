#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatConversationResource.hpp"
namespace lol {
  inline Result<LolChatConversationResource> PostLolChatV1Conversations(LeagueClient& _client, const LolChatConversationResource& conversation)
  {
    try {
      return Result<LolChatConversationResource> {
        _client.https.request("post", "/lol-chat/v1/conversations?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(conversation).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatConversationResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void PostLolChatV1Conversations(LeagueClient& _client, const LolChatConversationResource& conversation, std::function<void(LeagueClient&,const Result<LolChatConversationResource>&)> cb)
  {
    _client.httpsa.request("post", "/lol-chat/v1/conversations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(conversation).dump(),
          Args2Headers({
            {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolChatConversationResource> { response });
          else
            cb(_client,Result<LolChatConversationResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
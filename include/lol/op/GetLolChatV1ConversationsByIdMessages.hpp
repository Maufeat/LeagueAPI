#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatConversationMessageResource.hpp"
namespace lol {
  inline Result<std::vector<LolChatConversationMessageResource>> GetLolChatV1ConversationsByIdMessages(LeagueClient& _client, const std::string& id)
  {
    try {
      return ToResult<std::vector<LolChatConversationMessageResource>>(_client.https.request("get", "/lol-chat/v1/conversations/"+to_string(id)+"/messages?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolChatConversationMessageResource>>(e.code());
    }
  }
  inline void GetLolChatV1ConversationsByIdMessages(LeagueClient& _client, const std::string& id, std::function<void(LeagueClient&, const Result<std::vector<LolChatConversationMessageResource>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/conversations/"+to_string(id)+"/messages?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolChatConversationMessageResource>>(e));
            else
              cb(_client, ToResult<std::vector<LolChatConversationMessageResource>>(response));
        });
  }
}
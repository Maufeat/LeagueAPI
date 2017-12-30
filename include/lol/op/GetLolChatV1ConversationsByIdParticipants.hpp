#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatUserResource.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolChatUserResource>> GetLolChatV1ConversationsByIdParticipants(T& _client, const std::string& id)
  {
    try {
      return ToResult<std::vector<LolChatUserResource>>(_client.https.request("get", "/lol-chat/v1/conversations/"+to_string(id)+"/participants?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolChatUserResource>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChatV1ConversationsByIdParticipants(T& _client, const std::string& id, std::function<void(T&, const Result<std::vector<LolChatUserResource>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/conversations/"+to_string(id)+"/participants?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolChatUserResource>>(e));
            else
              cb(_client, ToResult<std::vector<LolChatUserResource>>(response));
        });
  }
}
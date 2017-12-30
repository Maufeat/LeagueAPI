#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatGroupResource.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolChatGroupResource>> GetLolChatV1FriendGroups(T& _client)
  {
    try {
      return ToResult<std::vector<LolChatGroupResource>>(_client.https.request("get", "/lol-chat/v1/friend-groups?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolChatGroupResource>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChatV1FriendGroups(T& _client, std::function<void(T&, const Result<std::vector<LolChatGroupResource>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/friend-groups?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolChatGroupResource>>(e));
            else
              cb(_client, ToResult<std::vector<LolChatGroupResource>>(response));
        });
  }
}
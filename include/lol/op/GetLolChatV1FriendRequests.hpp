#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatFriendRequestResource.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolChatFriendRequestResource>> GetLolChatV1FriendRequests(T& _client)
  {
    try {
      return ToResult<std::vector<LolChatFriendRequestResource>>(_client.https.request("get", "/lol-chat/v1/friend-requests?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolChatFriendRequestResource>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChatV1FriendRequests(T& _client, std::function<void(T&, const Result<std::vector<LolChatFriendRequestResource>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/friend-requests?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolChatFriendRequestResource>>(e));
            else
              cb(_client, ToResult<std::vector<LolChatFriendRequestResource>>(response));
        });
  }
}
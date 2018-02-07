#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatFriendCountsResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChatFriendCountsResource> GetLolChatV1FriendCounts(T& _client)
  {
    try {
      return ToResult<LolChatFriendCountsResource>(_client.https.request("get", "/lol-chat/v1/friend-counts?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatFriendCountsResource>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChatV1FriendCounts(T& _client, std::function<void(T&, const Result<LolChatFriendCountsResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/friend-counts?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatFriendCountsResource>(e));
            else
              cb(_client, ToResult<LolChatFriendCountsResource>(response));
        });
  }
}
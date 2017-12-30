#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatFriendResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChatFriendResource> GetLolChatV1FriendsById(T& _client, const uint64_t& id)
  {
    try {
      return ToResult<LolChatFriendResource>(_client.https.request("get", "/lol-chat/v1/friends/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatFriendResource>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChatV1FriendsById(T& _client, const uint64_t& id, std::function<void(T&, const Result<LolChatFriendResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/friends/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatFriendResource>(e));
            else
              cb(_client, ToResult<LolChatFriendResource>(response));
        });
  }
}
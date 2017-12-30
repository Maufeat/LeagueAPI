#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatGroupResource.hpp"
namespace lol {
  template<typename T>
  inline Result<LolChatGroupResource> GetLolChatV1FriendGroupsById(T& _client, const uint32_t& id)
  {
    try {
      return ToResult<LolChatGroupResource>(_client.https.request("get", "/lol-chat/v1/friend-groups/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatGroupResource>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChatV1FriendGroupsById(T& _client, const uint32_t& id, std::function<void(T&, const Result<LolChatGroupResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/friend-groups/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatGroupResource>(e));
            else
              cb(_client, ToResult<LolChatGroupResource>(response));
        });
  }
}
#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<json> DeleteLolChatV1FriendGroupsById(T& _client, const uint32_t& id)
  {
    try {
      return ToResult<json>(_client.https.request("delete", "/lol-chat/v1/friend-groups/"+to_string(id)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void DeleteLolChatV1FriendGroupsById(T& _client, const uint32_t& id, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-chat/v1/friend-groups/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}
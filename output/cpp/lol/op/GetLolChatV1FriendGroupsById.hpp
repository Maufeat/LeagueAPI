#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatGroupResource.hpp"
namespace lol {
  inline Result<LolChatGroupResource> GetLolChatV1FriendGroupsById(LeagueClient& _client, const uint32_t& id)
  {
    try {
      return Result<LolChatGroupResource> {
        _client.https.request("get", "/lol-chat/v1/friend-groups/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChatGroupResource> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolChatV1FriendGroupsById(LeagueClient& _client, const uint32_t& id, std::function<void(LeagueClient&,const Result<LolChatGroupResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/friend-groups/"+to_string(id)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<LolChatGroupResource> { response });
          else
            cb(_client,Result<LolChatGroupResource> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
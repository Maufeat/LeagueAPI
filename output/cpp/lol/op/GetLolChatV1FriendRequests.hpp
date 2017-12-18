#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatFriendRequestResource.hpp"
namespace lol {
  inline Result<std::vector<LolChatFriendRequestResource>> GetLolChatV1FriendRequests(LeagueClient& _client)
  {
    try {
      return Result<std::vector<LolChatFriendRequestResource>> {
        _client.https.request("get", "/lol-chat/v1/friend-requests?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolChatFriendRequestResource>> { Error { to_string(e.code().value()), -1, e.code().message() } };
    }
  }
  inline void GetLolChatV1FriendRequests(LeagueClient& _client, std::function<void(LeagueClient&,const Result<std::vector<LolChatFriendRequestResource>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/friend-requests?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
          if(!e)
            cb(_client, Result<std::vector<LolChatFriendRequestResource>> { response });
          else
            cb(_client,Result<std::vector<LolChatFriendRequestResource>> { Error { to_string(e.value()), -1, e.message() } });
        });
  }
}
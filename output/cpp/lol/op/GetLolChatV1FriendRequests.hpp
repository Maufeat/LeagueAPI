#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatFriendRequestResource.hpp>
namespace lol {
  Result<std::vector<LolChatFriendRequestResource>> GetLolChatV1FriendRequests(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-chat/v1/friend-requests?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}
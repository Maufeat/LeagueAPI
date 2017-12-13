#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatFriendRequestResource.hpp>
namespace lol {
  Result<json> PostLolChatV1FriendRequests(const LeagueClient& _client, const LolChatFriendRequestResource& request)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-chat/v1/friend-requests?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(request).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}
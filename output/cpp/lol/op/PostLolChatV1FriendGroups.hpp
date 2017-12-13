#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChatGroupResource.hpp>
namespace lol {
  Result<json> PostLolChatV1FriendGroups(const LeagueClient& _client, const LolChatGroupResource& group)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-chat/v1/friend-groups?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(group).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}